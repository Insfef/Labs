#include <iostream>
#include "windows.h"

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	unsigned short o; /* ������������� ��������� ����� */
	unsigned short p; /* ������� ������������ ����� */
	unsigned short l; /* ������ ����� */
	unsigned short UnitStateWord; /* ���� ���������� ������� */
								/* ���� ����� ���������� ������� */
	printf("������� ���� ���������� ������� \n");
	printf("(16-������ ����� �� 0 �� 0xFFFF) >");
	scanf_s("%hx", &UnitStateWord);
	/* ��������� ��������� ������ */
	o = (UnitStateWord >> 8) & 0xFF;
	p = (UnitStateWord >> 6) & 1;
	l = UnitStateWord & 0x3F;
	/* ����� ����������� */
	putchar('\n');
	printf("������������� ��������� �����          = %hu\n", o);
	printf("������� ������������ �����             = %hu\n", p);
	printf("������ �����                           = %hu\n", l);
	return 0;
}