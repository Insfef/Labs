// Lab8-B.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define  _CRT_SECURE_NO_WARNINGS
#include "windows.h"
#include <iostream>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int a, b, c, d, j, k, i;
    int n, ne, nk, ni, nn, nm;

    int nep[100];
    c = 5;


    printf("Удалить или Добавить? (0/1) >> ");
    scanf("%d", &nm);
   
    
    for (i = 0; i < c; nep[i++] = rand() % 9);

    for (i = 0, n = 1; i < c; i++, n++)
    {
         printf("%d.)%-3d ", n, nep[i]);

    }

    printf("\n\n");
    printf("Введите количество елементов >> ");
    scanf("%d", &ne);
    //ne = 1;
    //ni = 1;
    //printf("Введите индекс, на место которого вы хотите поместить елемент # > ");
    //scanf("%d", &ni);

    printf("\n\n");

        if (nm == 1)
        {


            for (b = 0; b < ne; n++)
            {
                c++;

                printf("Введите индекс, на место которого вы хотите поместить елемент >> ");
                scanf("%d", &ni);

                printf("\n\n");
                for (i = c; i >= ni; i--)
                {
                    nep[i] = nep[i - 1];
                }

                printf("Введите число для элемента, который вы хотите поместить >> ");
                scanf("%d", &nk);
                nep[i] = nk;

                printf("\n\n");
                for (i = 0, n = 1; i < c; i++, n++)
                {
                    printf("%d.)%-3d ", n, nep[i]);

                }
                b++;

                printf("\n\n");
            }

        }



        if (nm == 0)
        {

            for (b = 0; b < ne; n++)
            {
                c--;

                printf("Введите индекс елемента, который вы хотите удалить >> ");
                scanf("%d", &ni);

                printf("\n\n");
                for (i = ni; i <= c; i++)
                {
                    nep[i - 1] = nep[i];
                }

                printf("\n\n");
                for (i = 0, n = 1; i < c; i++, n++)
                {
                    printf("%d.)%-3d ", n, nep[i]);

                }
                b++;

                printf("\n\n");
            }



        }







    printf("\n\n");

    /*for (i = 0, n = 1; i < c + 1; i++, n++)
    {
        printf("%d.)%-3d ", n, nep[i]);

    }
    */


    //printf("Введите число для элемента # > ");
    //scanf("%d", &nk);

}
