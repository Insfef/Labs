
//#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#define S 9

 /* матрица */
int nepsi[S][S];

int nep[S][S];

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
   
    int i, a, b, ii, jj;
    int j;

    printf("Исходный массив\n\n");
    for (i = 0; i < S; i++)
    {
        for (j = 0; j < S; j++)
        {
            nepsi[i][j] = rand() % 100;
            nep[i][j] = nepsi[i][j];
            printf("%3d", nep[i][j]);
        }
        putchar('\n');
    }

    printf("\n\n");
    printf("Задание A\n"); 
    //поменять местами елемент с максимальным значением в каждой строке с первым елементом этой же строки
    for (i = 0; i < S; i++)
    {

        for (j = 0, a = 0; j < S - 1; j++)
        {

            if (a < nep[i][j])
            {
                a = nep[i][j];
                ii = i;
                jj = j;
            }
            
        }
        b = nep[i][0];
        nep[i][0] = a;
        nep[ii][jj] = b;
        
    }

    putchar('\n');
    for (i = 0; i < S; i++)
    {
        for (j = 0; j < S; j++)
        {
            printf("%3d", nep[i][j]);
        }
        putchar('\n');
    }
   

    printf("\n\n");
    printf("Задание Б\n");

    //поменять местами елемент с минимальным значеним в каждом столбце с первым елементом этого же столбца
    for (j = 0; j < S; j++)
    {

        for (i = 0, a = 100; i < S - 1; i++)
        {

            if (a > nepsi[i][j])
            {
                a = nepsi[i][j];
                ii = i;
                jj = j;
            }

        }
        b = nepsi[0][j];
        nepsi[0][j] = a;
        nepsi[ii][jj] = b;

    }

    putchar('\n');
    for (i = 0; i < S; i++)
    {
        for (j = 0; j < S; j++)
        {
            printf("%3d", nepsi[i][j]);
        }
        putchar('\n');
    }


    return 0;
}
