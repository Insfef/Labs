#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "windows.h"
int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y;
	while (true)
	{
		system("cls");

		printf("Введите координату x >");
		scanf("%lf", &x);
		printf("Введите координату y >");
		scanf("%lf", &y);

		printf("x=%6.3lf;  y=%6.3lf\n", x, y);

		if 
		(
			( (x >= 0) && (x * x + y * y <= 1) || (x <= 0) && (x * x + y * y <= 2) ) && (y >= 0)
		)
		printf("Точка попадает в область\n");

		else 
		printf("Точка не попадает в область\n");

		printf("Для продолжения нажмите любую клавишу");
		_getch();
	}

	return 0;
}