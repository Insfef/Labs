
#include "H_Lab3b.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));

	int s = 5;
	int* nep = new int[s];

	//nep_gen(nep, s);

	int ans = 1;
	while (ans == 1 || ans == 2)
	{
		printf("1 – Генерация массива, 2 – Обработка массива;    Чтобы закончить введите что-либо иное > ");
		cin >> ans;
		putchar('\n');
		switch (ans) {
		case 1:
			system("CLS");
			nep_gen(nep, s);
			break;
		case 2:
			system("CLS");
			nep_re(nep, s);
			break;
		}

	}

	//nep_re(nep, s);

}
