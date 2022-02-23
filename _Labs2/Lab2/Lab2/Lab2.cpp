#include <stdio.h>
#include <string.h>
#include <iostream>
#include <ctime>
#include "F_sort.h"
#include "S_lists.h"
#include "F_prnt.h"
#include "F_exec.h"

using namespace std;

int main(void) {
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	system("chcp 1251");
	int ans = 0, a = 0;
	lists nep[10];

	/*	Папка К 4,75 4
	   Бумага К 13,90 10
	   Калькулятор О 411,00 1 */

	while (ans != 4)
	{
		printf("1 – заполнить таблицу, 2 – сортировать, 3 – напечатать, 4 - закончить > ");
		cin >> ans;
		putchar('\n');
		switch (ans) {
		case 1:
			system("CLS");
			exec(nep);
			a = 1;
			break;
		case 2:
			system("CLS");
			sort(nep);
			break;
		case 3:
			if (a == 1)
			{
				system("CLS");
				prnt(nep);
			}
			else
			{
				system("CLS");
				cout << "таблица не была заполнена" << endl;
			}
			break;
		}

	}

	return 0;
}