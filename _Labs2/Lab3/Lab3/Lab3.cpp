
#include "H_Lab3.h"
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));
	int s = 10;

	int* nep = new int[s];
	int* gear = nep;
	int* vert = new int[s];

	//for (; nep < gear + s; nep++)
	//{
	//	*nep = rand() % 100 - 50;
	//	cout << *nep << "\t";
	//}

	int ans = 1, b;

	while (ans == 1 || ans == 2)
	{
		printf("1 – Генерация массива, 2 – Обработка массива;    Чтобы закончить введите что-либо иное > ");
		cin >> ans;
		putchar('\n');
		switch (ans) {
		case 1:
			system("CLS");
			nepgear(nep, gear, s);
			b = min_blanc(gear, s);
			print_nep(nep, s);
			break;
		case 2:
			system("CLS");
			print_nep(nep, s);
			pos_vert(vert, gear, s, b);
			break;
		}

	}
	//nepgear(nep, gear, s);

	//nep = gear;

	//cout << endl;
	//int b = min_blanc(gear, s);
	//pos_vert(vert, gear, s, b);

	delete[] nep, gear, vert;
}