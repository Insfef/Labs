#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "windows.h"

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int k, x, z;

	int i = 0;

	printf("Угадайте количество арбузов\n\n");
	srand(time(0));

	x = rand() % 100 + 1;
	//printf("asdawd=%d\n\n", x);
	

	while (true)
	{

		printf("Введите количество арбузов >");
		scanf("%d", &k);

		if (k > x)
			printf("Арбузов меньше\n\n", k);

		if (k < x)
			printf("Арбузов больше\n\n", k);

		if (k == x)
		{
			printf("Вы угадали количество арбузов\n\n", k);
			return 0;
		}
	
	}



}