#include "0_H.h"

#define PRINT_TYPE 1 
#define DEBUG

int compa(const char* s1, const char* s2)
{
	while (*s1 != '\0' && *s1 == *s2) {
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return 0;
	return 1;
}


void prnt(lists nep[], FILE* f, int* k)
{
	*k = 0;
	for (int i = 0; i < 20; i++, *k = *k + 1) {
		fscanf_s(f, "%d", &nep[i].num);
		fscanf_s(f, "%s", nep[i].name, sizeof(nep[i].name));
		if (!compa(nep[i].name, "***")) break;
		fseek(f, 1, SEEK_CUR);
		fscanf_s(f, "%c", &nep[i].type, sizeof(nep[i].type));
		fscanf_s(f, "%f", &nep[i].price);
		fscanf_s(f, "%d", &nep[i].mink);
	}
	printf("----------------------------------------------------------------------------------------------\n");
	printf("|------------------------------------ Прайс-лист --------------------------------------------|\n");
	printf("|--------------------------------------------------------------------------------------------|\n");
	printf("| № | Наименование товара | Тип товара | Цена за 1 шт (грн) |Минимальное количество в партии |\n");
	printf("|---|---------------------|------------|------------------- |--------------------------------|\n");
	for (int i = 0; i < *k; i++)
		printf("| %-2d| %-19s | %-10c | %-18.2f | %-30d |\n",
			nep[i].num, nep[i].name, nep[i].type, nep[i].price, nep[i].mink);
	printf("|--------------------------------------------------------------------------------------------|\n");
	printf("|----------------------- Примечание: К - канцтовары; О - оргтехника; ------------------------|\n");
	printf("----------------------------------------------------------------------------------------------\n");
}


void exec(lists nep[], FILE* f, int* k) {
	printf("Чтобы закончить, введите \" *** \" \n");
	int ii, nn;
	for (int n = 0; n < 10; n++) {
		nep[n].mink = 0;
		for (ii = 15, nn = 0; nn < ii; nn++)
			nep[n].name[nn] = ' ';
		nep[n].type = ' ';
		nep[n].price = 0;
		nep[n].mink = 0;
	}
	*k = 0;
	cout << "(Вводите данные через пробел)" << endl;
	for (int n = 0; n < 20; n++, *k = *k + 1) {
		printf("%d. Введите: Название(14 символов макс.), Тип (1 символ), Цена за шт., Мин. кол-во в партии >",
			n + 1);
		nep[n].num = n + 1;
		scanf_s("%s", nep[n].name, sizeof(nep[n].name));
		if (!compa(nep[n].name, "***")) break;
		scanf_s("%s", &nep[n].type, sizeof(nep[n].name));
		scanf_s("%f", &nep[n].price);
		scanf_s("%d", &nep[n].mink);
	}
	for (int i = 0; i < *k + 1; i++)
		fprintf(f, "%d %s %c %f %d\n", nep[i].num, nep[i].name, nep[i].type, nep[i].price, nep[i].mink);
//#ifdef DEBUG
//	cout << endl << __DATE__ << endl << __TIME__ << endl << __FILE__ << endl << "Имя функции: " << __FUNCTION__ << endl << endl;
//#endif
}


void exec_rand(lists nep[], FILE* f, int* k) {
	*k = 10;
	int ii, nn, comp;
	char nep1[] = "Папка";
	char nep2[] = "Бумага";
	char nep3[] = "Калькулятор";

	for (int n = 0; n < *k; n++) {
		comp = rand() % 3;
		nep[n].num = n + 1;
		if (comp == 0) {
			for (ii = 14, nn = 0; nn < ii; nn++)
			{
				nep[n].name[nn] = nep1[nn];
			}
			nep[n].type = 'K';
			nep[n].price = 4.75;
			nep[n].mink = 4;
		}
		if (comp == 1) {
			for (ii = 14, nn = 0; nn < ii; nn++)
			{
				nep[n].name[nn] = nep2[nn];
			}
			nep[n].type = 'K';
			nep[n].price = 13.90;
			nep[n].mink = 10;
		}
		if (comp == 2) {
			for (ii = 14, nn = 0; nn < ii; nn++)
			{
				nep[n].name[nn] = nep3[nn];
			}
			nep[n].type = 'O';
			nep[n].price = 411;
			nep[n].mink = 1;
		}
	}
	for (int i = 0; i < *k; i++)
		fprintf(f, "%d %s %c %f %d\n", nep[i].num, nep[i].name, nep[i].type, nep[i].price, nep[i].mink);
	fprintf(f, "***\n");
}

void add_beg(lists nep[], FILE* f, int* k)
{
	cout << "(Вводите данные через пробел)" << endl;
	if (*k > 19)
		return;
	*k = *k + 1;
	for (int i = *k + 1; i != 0; i--) {
		nep[i].num = nep[i - 1].num + 1;
		for (int j = 0; j < 14; j++)
			nep[i].name[j] = nep[i - 1].name[j];
		nep[i].type = nep[i - 1].type;
		nep[i].price = nep[i - 1].price;
		nep[i].mink = nep[i - 1].mink;
	}
	nep[0].num = 1;
	cin >> nep[0].name;
	cin >> nep[0].type;
	cin >> nep[0].price;
	cin >> nep[0].mink;
	for (int i = 0; i < *k + 1; i++)
		fprintf(f, "%d %s %c %f %d\n", nep[i].num, nep[i].name, nep[i].type, nep[i].price, nep[i].mink);
}

void add_end(lists nep[], FILE* f, int* k)
{
	cout << "(Вводите данные через пробел)" << endl;
	if (*k > 19)
		return;
	nep[*k].num = *k + 1;
	cin >> nep[*k].name;
	cin >> nep[*k].type;
	cin >> nep[*k].price;
	cin >> nep[*k].mink;

	*k = *k + 1;
	for (int i = 0; i < *k; i++)
		fprintf(f, "%d %s %c %f %d\n", nep[i].num, nep[i].name, nep[i].type, nep[i].price, nep[i].mink);
	fprintf(f, "***\n");
}

void read_n(lists nep[], FILE* f, int* k, int n)
{
	*k = 0;
	for (int i = 0; i < 20; i++, *k = *k + 1) {
		fscanf_s(f, "%d", &nep[i].num);
		fscanf_s(f, "%s", nep[i].name, sizeof(nep[i].name));
		if (!compa(nep[i].name, "***")) break;
		fseek(f, 1, SEEK_CUR);
		fscanf_s(f, "%c", &nep[i].type, sizeof(nep[i].type));
		fscanf_s(f, "%f", &nep[i].price);
		fscanf_s(f, "%d", &nep[i].mink);
	}
	if (*k < n) {
		cout << "Данной строки не существует\n\n";
		return;
	}
	printf("----------------------------------------------------------------------------------------------\n");
	printf("|------------------------------------ Прайс-лист --------------------------------------------|\n");
	printf("|--------------------------------------------------------------------------------------------|\n");
	printf("| № | Наименование товара | Тип товара | Цена за 1 шт (грн) |Минимальное количество в партии |\n");
	printf("|---|---------------------|------------|------------------- |--------------------------------|\n");
	printf("| %-2d| %-19s | %-10c | %-18.2f | %-30d |\n",
		nep[n - 1].num, nep[n - 1].name, nep[n - 1].type, nep[n - 1].price, nep[n - 1].mink);
	printf("|--------------------------------------------------------------------------------------------|\n");
	printf("|----------------------- Примечание: К - канцтовары; О - оргтехника; ------------------------|\n");
	printf("----------------------------------------------------------------------------------------------\n");
}
