#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/* параметры, которые вводятся */
	double x, y; 
	/* параметры, которые задаются в программе */
	double a = 3;
	double t1, t2;   /* результаты */
	double ax, n = 5, n1, n2, n3;       /* рабочая переменная */

	printf("Введите x, y >");
	scanf("%lf %lf", &x, &y);

	ax = a * x * 3.14159 / 180;
	n1 = n - 1;
	n2 = 1 / n1;
	n3 = n - 3;

	t2 = (n2 / pow(cos(ax), n1) - n2 / pow(cos(ax), n3) ) / a;

	double a2 = pow(a, 3), a3 = 1 / a2 / 3;
	double x1 = pow(x, 3);

	t1 = (a3 / y) + (a3 / a2) * log(x1 / y);

	printf("t1 = %lg\n", t1);
	printf("t2 = %lg\n", t2);
	return 0;
}