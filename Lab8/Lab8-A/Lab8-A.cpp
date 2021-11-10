#define  _CRT_SECURE_NO_WARNINGS
#include "windows.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <string>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int Ar[10];
	int n, i, x = 0, y = 0;

	char a[4] = "ДА";
	char b[4] = "НЕТ";
	char name[4];
	for (n = 0; n < 10; )
	{
	printf("Курите? (ДА/НЕТ) >");
	scanf("%s", name);
	putchar ('\n\n');
	int ca = strcmp(a, name);
	int cb = strcmp(b, name);
		if (ca == 0)
		{
			if (x != 5)
			{
				printf("Выберите место с номером от 1 до 5 >");
				scanf("%d", &i);
				if (Ar[i] != 1)
				{
					Ar[i] = 1;
					n++;
					x++;
				}
				else
					printf("Выбранное место уже занято \n\n");
			}
			else
			printf("Все местa для курящих заняты \n\n");
		}
		else if (cb == 0)
		{
			if (y != 5)
			{

				printf("Выберите место с номером от 6 до 10 >");
				scanf("%d", &i);
				if (Ar[i] != 1)
				{
					//for (i = 0; i > n; i++)
					Ar[i] = 1;
					n++;
					y++;

				}
				else
					printf("Выбранное место уже занято \n\n");
			}
			else
			printf("Все местa для некурящих заняты \n\n");
		}
	}
	printf("Все местa уже заняты \n");
	return 0;
}
