#include "windows.h"
#include <iostream>
#define m 5
#define n 5

int iffy(int a[])
{
	int i, j, k, b, c, d;
	int iffy[m][n];
	int comp[m];

	printf("Начальный двумерный массив:\n\n");
	for (i = 0, k = 0; i < m; i++)
	{
		for (j = 0; j < m; j++, k++)
		{
			iffy[i][j] = a[k];

			printf("%3d", iffy[i][j]);
		}

		printf("\n");
	}



	printf("\n\n");


	printf("Обработанный двумерный массив:\n\n"); 

	for (i = 0, k = 0, c = 0; i < m; i++)
	{
		for (j = 0; j < m; j++, k++)
		{
			iffy[i][j] = a[k];
			
			if (j > 0 && iffy[i][j] < b)
			{
				b = iffy[i][j];
			}
			else if (j == 0)
				b = iffy[i][j];
		}


		for (j = 0; j < n; j++)
		{
			iffy[i][j] += b;

			printf("%3d", iffy[i][j]);
		}
		printf("\n");


		for (j = 0; j < m; j++)
		{

			if (j > 0 && iffy[i][j] > b)
			{
				b = iffy[i][j];
			}
			else if (j == 0)
				b = iffy[i][j];
		}


		c += b;

	}

	printf("\n\nСумма максимальных значений каждой строки: %3d\n\n", c);

	for (i = 0, k = 0; i < m; i++)
	{
		for (j = 0; j < m; j++, k++)
		{
			a[k] = iffy[i][j];

		}
	}


	printf("\n");
	return a[k];
}

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int k, i, j;
	int nep[m * n];

	printf("Начальный массив:\n\n");

	for (i = 0, k = 1; i < m * n; i++, k ++)
	{
		nep[i] = rand() % 5;
		printf("%3d", nep[i]);
	}
	printf("\n\n");


	iffy(nep);

	printf("Обработанный одномерный массив:\n\n");

	for (i = 0, k = 1; i < m * n; i++, k++)
	{
		printf("%3d", nep[i]);
	}
	printf("\n\n");
}

