#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "windows.h"
int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int k, k1;

	while (true) {

		

		// xx1 ����
		// xx2-4 �����
		// xx5-0 ������
		// 11 - 19 ������

		printf("������� k ������ >");
		scanf("%d", &k);

		k1 = k % 10;
	
		if (k >= 11 && k <= 19)
			printf("� ���� %d ������\n", k);
		
		else
		{
			if (k1 == 1)
				printf("� ���� %d ����\n\n", k);
			if (k1 >= 2 && k1 <= 4)
				printf("� ���� %d �����\n\n", k);
			if (k1 >= 5 && k1 <= 9 || k1 == 0)
				printf("� ���� %d ������\n\n", k);

			
		}





	}



}