#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;


int main(void) {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    unsigned int o; /* ������������� ��������� ����� */
    unsigned int p; /* ������� ������������ ����� */
    unsigned int l; /* ������ ����� */
    unsigned short UnitStateWord; /* ���� ���������� ������� */

    printf("������� ������������� ��������� ����� (0 - 255) >");
    scanf("%d", &o);
    printf("������� ������� ������������ ����� (0 / 1) >");
    scanf("%d", &p);
    printf("������� ������ ����� (0 - 63) >");
    scanf("%d", &l);

    UnitStateWord = ((unsigned char)o & 0xFF) << 8;
    UnitStateWord |= ((unsigned char)p & 1) << 6;
    UnitStateWord |= l & 0x3F;

    printf("\n���� ���������� ������� = %04x\n", UnitStateWord);


    return 0;

}