#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x1, x2, x3, k, n, p1;

	srand(time(0));

	x3 = 0;

	for (n = 0; n < 9; n++)
	{
		x1 = rand() % 10 + 1;
		x2 = rand() % 10 + 1;
		p1 = x1 * x2;

		//printf("%d\n", p1);

		printf("%d * %d = ", x1, x2);
		scanf("%d", &k);

		if (k == p1)
		{
			x3++;
			printf(" верно \n\n");
		}
		else
			printf(" ошибка \n\n");
	}
	printf("Количество верных ответов: %d из 10\n\n", x3);
}
