#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;


int main(void) {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    unsigned int o; /* Идентификатор владельца блока */
    unsigned int p; /* Признак программного блока */
    unsigned int l; /* Размер блока */
    unsigned short UnitStateWord; /* блок управления памятью */

    printf("Введите идентификатор владельца блока (0 - 255) >");
    scanf("%d", &o);
    printf("Введите признак программного блока (0 / 1) >");
    scanf("%d", &p);
    printf("Введите размер блока (0 - 63) >");
    scanf("%d", &l);

    UnitStateWord = ((unsigned char)o & 0xFF) << 8;
    UnitStateWord |= ((unsigned char)p & 1) << 6;
    UnitStateWord |= l & 0x3F;

    printf("\nБлок управления памятью = %04x\n", UnitStateWord);


    return 0;

}