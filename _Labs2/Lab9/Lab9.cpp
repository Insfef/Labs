#include "0_hdr.h"

int main(void) {
	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	dat nep;
	nep.mink = 1;
	int ans = 0, a = 0;
	FILE* f;
	int* k = new int;
	*k = 0;

	while (ans != 11)
	{
		printf(" 1. Создать список\n 2. Напечатать список с начала\n 3. Напечатать список с конца\n 4. Найти по критерию с начала\n");
		printf(" 5. Найти по критерию с конца\n 6. Добавить запись по номеру\n 7. Удалить запист по номеру\n");
		printf(" 8. Сортировать записи\n 9. Перенести список в файл\n 10. Создать новый список из файла \n 11. Выйти из программы\n\t>> ");

		cin >> ans;
		system("CLS");
		putchar('\n');
		switch (ans) {
		case 1:
			crt(nep, k);
			a = 1;
			break;

		case 2:
			prnt(nep, k, 1);
			break;

		case 3:
			prnt(nep, k, 2);
			break;

		case 4:
			fnd(nep, k, 1);
			break;

		case 5:
			fnd(nep, k, 2);
			break;

		case 6:
			add(nep, k);
			break;

		case 7:
			dlt(nep, k);
			break;

		case 8:
			srt(nep, k);
			break;

		case 9:
			fopen_s(&f, "t1.txt", "w");
			wrt(nep, f, k);
			fclose(f);
			break;

		case 10:
			fopen_s(&f, "t1.txt", "r");
			nwl(nep, f, k);
			fclose(f);
			a = 1;
			break;
		}
	}

	return 0;
}