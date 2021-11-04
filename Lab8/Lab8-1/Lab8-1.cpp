#include "windows.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int Ar[200];   /* массив, который обрабатывается */
int main(void)
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);

		int i, j;  
		int nn; 

		srand(time(NULL));
		/* заполнение массива случайными числами */
		for (i = 0; i < 200; Ar[i++] = rand() % 100 - 50);
		/* вывод начального массива */
		printf("Начальный массив:\n");
		for (i = 0; i < 200; printf("%3d  ", Ar[i++]));
		putchar('\n');
		putchar('\n');

		for (nn = i = 0; i < 200; i++) { 
			int ii = i + 1;
			int iii = i - 1;
				if (Ar[ii] <= Ar[i] && i < 199 || Ar[ii] == Ar[i])
				{
					if (nn == 0);
					{
						printf("%3d  ", i);
						nn = 1;
					}
				}
				else 
				{
					if (nn == 1)
						nn = 0;
				}
		}

	
}