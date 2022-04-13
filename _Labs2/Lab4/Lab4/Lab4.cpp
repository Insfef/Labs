
#include "H_Lab4.h"

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

	int ans = 1, a = 0;

	while (ans == 1 || ans == 2)
	{
		printf("1 – Генерация массива, 2 – Обработка массива;    Чтобы закончить введите что-либо иное > ");
		cin >> ans;
		putchar('\n');
		switch (ans) {
		case 1:
			system("CLS");
			nepgear(nep, gear, s);
			a = 1;
			break;
		case 2:
			if (a == 1)
			{
				system("CLS");
				pos_vert(vert, gear, s);
			}
			else
			{
				system("CLS");
				cout << "Массив не сгенерирован \n\n";
			}
		break;
		}

	}

	delete[] nep, gear, vert;
}