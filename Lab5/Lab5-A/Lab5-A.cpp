#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "windows.h"
int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, c, d;

	while(true) {
		printf("Введите a >");
		scanf("%lf", &a);
		printf("Введите b >");
		scanf("%lf", &b);
		printf("Введите c >");
		scanf("%lf", &c);

		double b2, db, x1, x2;
		b2 = b * b;

		d = b2 - 4 * a * c;

		if (d >= 0) {

			db = sqrt(d);

			x1 = (-b + db) / (2 * a);
			x2 = (-b - db) / (2 * a);
			if (d > 0)
				printf("x1=%6.3lf;  x2=%6.3lf\n", x1, x2);
			else
				printf("x1=%6.3lf;\n", x1);
		}
		else

			printf("уравнение не имеет корней\n");
	}

}