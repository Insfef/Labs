#include "H_Lab3a.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));
	int sum;

	int* nep = new int[s];

	char ans = 1;

	nep_gen(nep);
	
	while (ans != '2')
	{
		cout << "1 – Генерация массива\n";
		cout << "a – относительный адрес;\t\t b - через абсолютный адрес; \n";
		cout << "c - не использовать адресацию;\t\t d - через массив указателей; \n";
		cout << "e - через указатель на указатель;\t f - оформить в виде функции с параметрами указателями; \n";
		cout << "Чтобы закончить введите 2 >";

		cin >> ans;
		putchar('\n');
		switch (ans) {
		case '1':
			system("CLS");
			nep_gen(nep);
			break;
		case 'a':
			system("CLS");
			print_nep(nep);
			nep_a(nep);
			break;
		case 'b':
			system("CLS");
			print_nep(nep);
			nep_b(nep);
			break;
		case 'c':
			system("CLS");
			print_nep(nep);
			nep_c(nep);
			break;
		case 'd':
			system("CLS");
			print_nep(nep);
			nep_d(nep);
			break;
		case 'e':
			system("CLS");
			print_nep(nep);
			nep_e(nep);
			break;
		case 'f':
			system("CLS");
			print_nep(nep);
			nep_e(nep);
			break;
		}

	}
	delete[] nep;
}

