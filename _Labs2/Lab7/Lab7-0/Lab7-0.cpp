#include "0_hdr.h"

int main(void) {
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	system("chcp 1251");

	int ans = 0, a = 0;
	lists nep [20];

	FILE* f;
	int* k = new int;
	*k = 0;


	/*	Папка К 4,75 4
	   Бумага К 13,90 10
	   Калькулятор О 411,00 1 */
																			
	while (ans != 7)
	{
		printf(" 1. Ввод с экрана\n 2. Ввод случайным образом\n 3. Добавить запись в начало\n 4. Добавить запись в конец\n 5. Печать одной записи из файла по номеру\n");
		printf("6. Чтение всех структур последовательно из файла и печать\n 7. Выход из программы\n\t>> ");

		cin >> ans;
		putchar('\n');
		switch (ans) {


		case 1:
			system("CLS");

			fopen_s(&f, "t1.txt", "wb");
			exec(nep, f, k);

			fclose(f);
			cout << *k;
			a = 1;
			break;


		case 2:
			system("CLS");

			fopen_s(&f, "t1.txt", "wb");
			exec_rand(nep, f, k);
			a = 1;
			fclose(f);
			cout << *k;
			break;

		case 3:
			system("CLS");

			fopen_s(&f, "t1.txt", "wb");

			add_beg(nep, f, k);
			a = 1;
			fclose(f);
			cout << *k;
			break;

		case 4:
			system("CLS");

			fopen_s(&f, "t1.txt", "wb");

			add_end(nep, f, k);

			a = 1;

			fclose(f);

			cout << *k;
			break;


		case 5:
			system("CLS");
			int n;
			cout << "Введите номер строки >> ";
			cin >> n;
			fopen_s(&f, "t1.txt", "rb");
			read_n(nep, f, k, n);
			fclose(f);
			a = 1;
			break;


		case 6:
				system("CLS");

				fopen_s(&f, "t1.txt", "rb");
				prnt(nep, f, k);

				fclose(f);
		}

	}

	return 0;
}