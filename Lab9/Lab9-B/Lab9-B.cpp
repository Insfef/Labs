
#define  _CRT_SECURE_NO_WARNINGS
#include "windows.h"
#include <iostream>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int s;
    int c;
    printf("Введите количество строк >> ");
    scanf("%d", &s);
    printf("Введите количество столбцов >> ");
    scanf("%d", &c);

    // // Генерация первой матрицы
    int **iffy = new int *[s];


    int i;
    int j;

    for (i = 0; i < s; i++)
    {
        iffy[i] = new int[c];
    }

    for (i = 0; i < s; i++)
    {
        for (j = 0; j < c; j++)
        {
            iffy[i][j] = rand() % 10;
            printf("%3d", iffy[i][j]);
        }
        putchar('\n');
    }


    // Генерация второй матрицы

    int ss;
    int cc;
    printf("Введите количество строк >> ");
    scanf("%d", &ss);
    printf("Введите количество столбцов >> ");
    scanf("%d", &cc);


    int** nep = new int* [ss];


    for (i = 0; i < ss; i++)
    {
        nep[i] = new int[cc];
    }


    for (i = 0; i < ss; i++)
    {
        for (j = 0; j < cc; j++)
        {
            nep[i][j] = rand() % 5;
            printf("%3d", nep[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');


    //Проверка на возомжность перемножения матриц
    //Если условие удовлетворено, то создаётся третья матрица, которая является результатом перемножения двух прошлых матриц
    if (c == ss)
    {

        printf("Результат\n");
        int f, v, n, a, b, d, g;
        f = s; 
        v = cc;

        int** comp = new int* [f];

        for (i = 0; i < f; i++)
        {
            comp[i] = new int[v];
        }

        for (i = 0; i < f; i++)
        {
            for (j = 0; j < v; j++)
            {
                for (b = 0, n = 0, a = 0; n < cc; n++, b++)
                {
                    if (b >= ss)
                        d = 0;
                    else
                        d = nep[b][j];

                        if (i >= cc)
                            g = 0;
                        else
                            g = iffy[i][b];

                        a += g * d;
                }
                comp[i][j] = a;
                printf("%3d", comp[i][j]);

            }
            putchar('\n');
        }
    }
    else
    printf("Матрицы нельзя умножить");

    return 0;
}