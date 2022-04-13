#include "F_exec.h"
#include <iostream>

using namespace std;

#define DEBUG
#define PRINT_TYPE 2

void exec(lists nep[]) {

#ifdef DEBUG
	cout << __DATE__ << endl << __TIME__ << endl << __FILE__ << endl << "Имя функции: " << __FUNCTION__ << endl << endl;
#endif

#if PRINT_TYPE == 1
	printf("Чтобы закончить, введите \" *** \" \n");

	int ii, nn;

	for (int n = 0; n < 10; n++) {

		for (ii = 15, nn = 0; nn < ii; nn++)
			nep[n].name[nn] = ' ';

		nep[n].type = ' ';
		nep[n].price = 0;
		nep[n].mink = 0;

	}

	cout << "(Вводите данные через пробел)" << endl;
	for (int n = 0; n < 10; n++) {
		printf("%d. Введите: Название(14 символов макс.), Тип (1 символ), Цена за шт., Мин. кол-во в партии >",
			n + 1);
		scanf_s("%s", nep[n].name, sizeof(nep[n].name));
		if (!strcmp(nep[n].name, "***")) break;
		scanf_s("%s", &nep[n].type, sizeof(nep[n].name));
		scanf_s("%f", &nep[n].price);
		scanf_s("%d", &nep[n].mink);
	}

#ifdef DEBUG
	cout << endl << __DATE__ << endl << __TIME__ << endl << __FILE__ << endl << "Имя функции: " << __FUNCTION__ << endl << endl;
#endif
#else
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
#endif











}