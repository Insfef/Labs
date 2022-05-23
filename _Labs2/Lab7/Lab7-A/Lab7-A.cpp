#include "A-hdr.h"

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	char ans = '0';
	int a = 0;

	int* mas1 = new int[S];
	int* mas2 = new int[S];

	while (ans != '5')
	{
		cout << "\n 1. Заполнить массив №1 и записать в файл №1\n";
		cout << " 2. Перенести данные из файла №1 в массив №2 и в файл №2 \n\n 3. Вывести на экран массив №2\n 4. Вывести на экран данные файла №2\n";
		cout << " \n\t5. Закончить \n";
		cout << "\n\t>> ";

		cin >> ans;
		system("CLS");
		switch (ans) {

		case '1':
			system("CLS");
			fill(mas1);
			wrt(mas1, 1);
			break;

		case '2':
			system("CLS");
			rdf(mas2, 1);
			wrt(mas2, 2);
			cout << "\n\t*Данные успешно перенесены*\n\n";
			cout << "----------------------------------------------\n";
			a = 1;
			break;

		case '3':
			if (a != 1) {
				cout << "\n\t*Массив пуст* \n\n";
				cout << "----------------------------------------------\n";
				break;
			}
			system("CLS");
			prnt(mas2);
			break;

		case '4':
			system("CLS");
			prnt_x();
			break;
		}
	}
	delete[] mas1, mas2;
}