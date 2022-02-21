#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int n, i;


struct lists {
	char name[15];
	char type;
	float price;
	int mink;
} nep[10];

void input(struct lists nep[]) {

	int ii, nn, comp;
	char nep1[6] = "Папка";
	char nep2[7] = "Бумага";
	char nep3[12] = "Калькулятор";

	for (int n = 0; n < 10; n++) {
		comp = rand() % 3;

		for (ii = 14, nn = 0; nn < ii; nn++)

			nep[n].name[nn] = ' ';
		nep[n].type = ' ';
		nep[n].price = 0;
		nep[n].mink = 0;

	}

	for (int n = 0; n < 10; n++) {
		printf("%d. Введите: название, школу, количество, площадь >",
			n + 1);
		scanf_s("%s", nep[n].name, sizeof(nep[n].name));
		if (!strcmp(nep[n].name, "***")) break;
		scanf_s("%s", &nep[n].type, sizeof(nep[n].name));
		scanf_s("%f", &nep[n].price);
		scanf_s("%d", &nep[n].mink);
	}
}

void input_rand(struct lists nep[]) {
	int ii, nn, comp;
	char nep1[6] = "Папка";
	char nep2[7] = "Бумага";
	char nep3[12] = "Калькулятор";

	for (int n = 0; n < 10; n++) {
		comp = rand() % 3;
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
}

void sort(struct lists nep[]) {
	struct lists x;
	int i, j, m, n = 10;

	for (i = 0; i < n - 1; i++) {
		m = i;
		for (j = i + 1; j < n; j++)
			if (strcmp(nep[m].name, nep[j].name) > 0) m = j;
		if (m > i) {

			x = nep[i];
			nep[i] = nep[m];
			nep[m] = x;
		}

	}
}

void prnt(struct lists nep[])
{
	printf("------------------------------------------------------------------------------------------\n");
	printf("|					Прайс-лист					 |\n");
	printf("|----------------------------------------------------------------------------------------|\n");
	printf("| Наименование товара | Тип товара | Цена за 1 шт (грн) |Минимальное количество в партии |\n");
	printf("|---------------------|------------|------------------- |--------------------------------|\n");
	n = 10;
	for (i = 0; i < n; i++)
		printf("| %-19s | %-10c | %-18.2f | %-30d |\n",
			nep[i].name, nep[i].type, nep[i].price, nep[i].mink);
	printf("|----------------------------------------------------------------------------------------|\n");
	printf("|                        Примечание: К - канцтовары; О - оргтехника;                     |\n");
	printf("------------------------------------------------------------------------------------------\n");

}


int main(void) {
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	std::system("chcp 1251");
	struct lists x;
	int n;
	int i, j;
	int m;
	int ans = 0;

	/*	Папка К 4,75 4
	   Бумага К 13,90 10
	   Калькулятор О 411,00 1 */

	while (ans != 5)
	{
		printf("1 – ввод с экрана, 2 – случайное заполнение, 3 – сортировка, 4 – печать, 5 - закончить > ");
		cin >> ans;
		putchar('\n');
		switch (ans) {
		case 1:
			system("CLS");
			printf("Чтобы закончить, введите \" *** \" \n");
			input(nep);
			system("CLS");
			break;
		case 2:
			system("CLS");
			input_rand(nep);
			break;
		case 3:
			system("CLS");
			sort(nep);
			break;
		case 4:
			system("CLS");
			prnt(nep);
			break;
		}

	}

	return 0;
}