#include "B-hdr.h"

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	char ans = '0';
	int a = 0;

	int* mas1 = new int[S];
	int* mas2 = new int[S];

	while (ans != '4')
	{
		cout << "\n 1. Заполнить массив №1\n 2. Записать массив №1 в файл\n";
		cout << " 3. Считать данные из файла в массив №2 и найти суму чётных элементов\n";
		cout << " \n\t4. Закончить \n\n\t>> ";

		cin >> ans;
		system("CLS");
		switch (ans) {

		case '1':
			system("CLS");
			fill(mas1);
			a = 1;
			break;

		case '2':
			if (a != 1) {
				cout << "\n\t*Сначала нужно заполнить массив* \n\n";
				cout << "----------------------------------------------\n";
				break;
			}
			system("CLS");
			wrt(mas1);
			break;

		case '3':
			system("CLS");
			rdf(mas2);
			break;
		}
	}
	delete[] mas1, mas2;
}