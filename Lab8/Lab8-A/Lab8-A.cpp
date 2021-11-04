#include "windows.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int a[10];
int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i, j;
	int nn;
	char name[3];

	for (i = 0; i < 10; a[i++] = 0)
	

	scanf("%c", name);



	srand(time(NULL));
	/* заполнение массива случайными числами */
	for (i = 0; i < 200; a[i++] = rand() % 100 - 50);
	/* вывод начального массива */
	printf("Начальный массив:\n");
	for (i = 0; i < 200; printf("%3d  ", a[i++]));
	putchar('\n');
	putchar('\n');

	for (nn = i = 0; i < 200; i++) {
		int ii = i + 1;
		int iii = i - 1;
		if (a[ii] == a[i] - 1 && i < 199 || a[ii] == a[i])
		{
			printf("%3d  ", i);
			if (nn == 0)
				nn = 1;
		}
		else
		{
			if (nn == 1)
			{
				printf("%3d  \n", i);
				nn = 0;
			}
		}
	}


}