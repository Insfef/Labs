#include "A-hdr.h"

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	char ans = '0';
	int a = 0;

	int* mas1 = new int[S];
	int* mas2 = new int[S];

	while (ans != '6')
	{
		cout << "\n 1. Заполнить массив №1\n 2. Записать массив №1 в файл №1\n";
		cout << " 3. Перенести данные из файла №1 в массив №2 и в файл №2 \n 4. Вывести на экран массив №2\n 5. Вывести на экран данные файла №2\n";
		cout << " 6. Закончить \n";
		cout << "\n\t>> ";

		cin >> ans;
		system("CLS");
		switch (ans) {


		case '1':
			system("CLS");
			fill(mas1);
			a = 1;
			break;


		case '2':
			system("CLS");
			wrt(mas1, 1);
			break;

		case '3':
			system("CLS");
			rdf(mas2, 1);
			wrt(mas2, 2);
			break;

		case '4':
			system("CLS");
			prnt(mas2);
			break;


		case '5':
			system("CLS");
			prnt_x();
			break;

		}

	}
}