#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "windows.h"
int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k, k1;

	while (true) {

		

		// xx1 דנטב
		// xx2-4 דנטבא
		// xx5-0 דנטבמג
		// 11 - 19 דנטבמג

		printf("ֲגוהטעו k דנטבמג >");
		scanf("%d", &k);

		k1 = k % 10;
	
		if (k >= 11 && k <= 19)
			printf("ף לוםÿ %d דנטבמג\n", k);
		
		else
		{
			if (k1 == 1)
				printf("ף לוםÿ %d דנטב\n\n", k);
			if (k1 >= 2 && k1 <= 4)
				printf("ף לוםÿ %d דנטבא\n\n", k);
			if (k1 >= 5 && k1 <= 9 || k1 == 0)
				printf("ף לוםÿ %d דנטבמג\n\n", k);

			
		}





	}



}