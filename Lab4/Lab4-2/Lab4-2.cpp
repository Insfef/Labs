#include <iostream>
#include "windows.h"

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	unsigned short o; /* Идентификатор владельца блока */
	unsigned short p; /* Признак программного блока */
	unsigned short l; /* Размер блока */
	unsigned short UnitStateWord; /* Блок управления памятью */
								/* Ввод блока управления памятью */
	printf("Введите блок управления памятью \n");
	printf("(16-ричное число от 0 до 0xFFFF) >");
	scanf_s("%hx", &UnitStateWord);
	/* Выделение составных частей */
	o = (UnitStateWord >> 8) & 0xFF;
	p = (UnitStateWord >> 6) & 1;
	l = UnitStateWord & 0x3F;
	/* вывод результатов */
	putchar('\n');
	printf("Идентификатор владельца блока          = %hu\n", o);
	printf("Признак программного блока             = %hu\n", p);
	printf("Размер блока                           = %hu\n", l);
	return 0;
}