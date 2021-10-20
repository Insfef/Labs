//#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"

int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	long n;              /* параметр ряда */
	double nn, nn2;         /* параметр ряда в форме с плавающей точкой */
	double ns = 0;        /* сумма членов ряда */
	double nk;         /* значение текущего члена */
	const double nc = 0.000001;  /* предел точности */
	short n1 = 1;
	for (n = 0; ; n++, n1 = -n1) 
	{
		nn = n;

		nn2 = nn * nn;

		nk = n1 * (1 - ((nn2 + 1) / (nn2 + 3)));

		if (fabs(nk) >= nc)

			ns += nk;

		else break;

		if (n == 9)
			printf("Сумма 10 членов ряда = %10.7lf\n", ns);
	}
	/* конец основного цикла */
	/* вывод окончательной суммы */
	printf("Полная сумма ряда = %10.7lf\n", ns);
	return 0;
} 