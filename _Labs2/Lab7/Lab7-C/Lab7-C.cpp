﻿#include "C-hdr.h"

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");

	char ans = '0';
	int a = 0;

	FILE* f;

	fopen_s(&f, "f1.dat", "wb+");
	
	while (ans != '4')
	{
		cout << "\n 1. Записать случайные данные в файл \n 2. Вывести на экран данные из файла и сумму элементов №3, №6 и №10\n";
		cout << " 3. Найти минимальный элемент и записать на его месте число \"999\"\n";
		cout << " \n\t4. Закончить \n\n\t>> ";

		cin >> ans;
		system("CLS");
		switch (ans) {

		case '1':
			system("CLS");
			f_fill(f);
			break;

		case '2':
			system("CLS");
			fnd_sum(f);
			break;

		case '3':
			system("CLS");
			fnd_mina(f);
			break;
		}
	}

	fclose(f);
}