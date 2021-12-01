#include <conio.h>
#include "windows.h"
#include <iostream>
#define m 5
#define n 5
using namespace std;


int nep(int a[m][n])
{
	int i, j, k;

	for (i = 0, k = 0; i < m; i++)
	{
		for (j = 0; j < n; j++, k++)
		{
			a[i][j] = rand() % 5;

			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return a[m][n];
}

int comp(int a[m][n])
{
	int i, j, k, b;


	printf("Введите номер строки ");
	cin >> k;

	for (i = k - 1, b = 0; i == k - 1; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				b++;
		}
	}

	return b;

}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int k = n * m;
	int kk;

	int nepu[m][n];

	while (true)
	{
		system("cls");

		nep(nepu);

		printf("\n");

		kk = comp(nepu);

		printf("Положительных чисел в строке: %3d", kk);

		_getch();
	}
}

