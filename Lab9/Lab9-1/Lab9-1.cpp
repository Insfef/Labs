//#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#define S 9

int Ar[S][S]; /* матрица */

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int i;
    int j;
    int s = S - 1;

    for (i = 0; i < S; i++)
    {
        for (j = 0; j < S; j++)
        {
            Ar[i][j] = rand() % 100;
            printf("%3d", Ar[i][j]);
        }
        putchar('\n');
    }

    printf("\nРезультат:\n\n");

    for (i = 0; i < S; i++)
    {
        for (j = 0; j < S; j++)
        {
            printf("%3d", Ar[s - j][s - i]);
        }
        putchar('\n');
    }
    

}