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

	while (ans != 9)
	{
		printf(" 1. Создать список\n 2. Напечатать список\n 3. Найти по критерию\n 4. Добавить запись по номеру\n 5. Удалить запист по номеру\n");
		printf(" 6. Сортировать записи\n 7. Перенести список в файл\n 8. Создать новый список из файла \n 9. Выйти из программы\n\t>> ");

		cin >> ans;
		putchar('\n');
		switch (ans) {
		case 1:
			system("CLS");
			crt(nep, k);
			a = 1;
			break;
		case 2:
			system("CLS");
			prnt(nep, k);
			break;
		case 3:
			system("CLS");
			fnd(nep, k);
			break;
		case 4:
			system("CLS");
			add(nep, k);
			break;
		case 5:
			system("CLS");
			dlt(nep, k);
			break;
		case 6:
			system("CLS");
			srt(nep, k);
			break;
		case 7:
			system("CLS");
			fopen_s(&f, "t1.txt", "w");
			wrt(nep, f, k);
			fclose(f);
			break;
		case 8:
			system("CLS");
			fopen_s(&f, "t1.txt", "r");
			nwl(nep, f, k);
			fclose(f);
			a = 1;
			break;
		}
	}

	return 0;
}