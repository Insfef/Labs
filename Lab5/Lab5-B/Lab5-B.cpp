#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "windows.h"
int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k, k1, k2;

	while (true) {

		

		// xxx1 гриб
		// xxx2-4 гриба
		// xxx5-0 грибов
		// 11 - 19 грибов
		// xx11 - 19 грибов

		printf("Введите количество грибов >");
		scanf("%d", &k);

		k1 = k % 10;
		k2 = k % 100;
	
		if (k2 >= 11 && k2 <= 19)
			printf("у меня %d грибов\n", k);
		
		else
		{
			if (k1 == 1)
				printf("у меня %d гриб\n\n", k);
			if (k1 >= 2 && k1 <= 4)
				printf("у меня %d гриба\n\n", k);
			if (k1 >= 5 && k1 <= 9 || k1 == 0)
				printf("у меня %d грибов\n\n", k);

			
		}



	}



}