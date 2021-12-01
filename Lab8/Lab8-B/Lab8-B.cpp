
#define  _CRT_SECURE_NO_WARNINGS
#include "windows.h"
#include <iostream>

#include <conio.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b, c, d, j, k, i;
    int n, ne, nk, ni, nn, nm;
    int nj;
    int nep[100];
    c = 5;

    for (i = 0; i < c; nep[i++] = rand() % 9);

    while (true)
    {
        system("cls");

        printf("Удалить или Добавить? (0/1) >> ");
        scanf("%d", &nm);

        while (true)
        {
            if (nm != 0 && nm != 1)
            {
                printf("Ошибка");
                printf("\n\n");
                _getch();
                break;
            }

            for (i = 0, n = 1; i < c; i++, n++)
            {
                printf("%-3d ", nep[i]);

            }

            printf("\n\n");
            printf("Введите количество елементов >> ");
            scanf("%d", &ne);
            if (ne < 1)
            {
                printf("Ошибка");
                printf("\n\n");
                _getch();
                break;
            }

            printf("\n\n");

            if (nm == 1)
            {


                if (c > 100)
                {
                    printf("Ошибка");
                    _getch();
                    break;
                }

                if (ne == 1)
                    printf("Введите индекс, на место которого вы хотите поместить елемент >> ");
                else if (ne > 1)
                    printf("Введите индекс c которого будет добавлено заданное вами количество елементов >> ");

                scanf("%d", &ni);

                nj = ni + ne - 1;
                ni -= 1;
                if (ni > c || ni < 0)
                {
                    printf("Ошибка");
                    _getch();
                    break;
                }

                c += ne;
                printf("\n\n");
                for (i = c; i > ni; i--)
                {
                    nep[i] = nep[i - ne];
                }

                if (ne == 1)
                    printf("Введите число для элемента, который вы хотите поместить >> ");
                else if (ne > 1)
                    printf("Введите число для элементов, которые вы хотите поместить >> ");

                scanf("%d", &nk);
                for (i = ni; i < (ni + ne); i++)
                    nep[i] = nk;

                printf("\n\n");
                for (i = 0, n = 1; i < c; i++, n++)
                {
                    printf("%-3d ", nep[i]);

                }

                printf("\n\n");

            }

            else if (nm == 0)
            {
                if (ne > c)
                {
                    printf("Ошибка");
                    _getch();
                    break;
                }


                if (ne == 1)
                    printf("Введите индекс елемента, который вы хотите удалить >> ");
                else if (ne > 1)
                    printf("Введите индекс c которого будет удалено заданное вами количество елементов >> ");
                scanf("%d", &ni);
                nj = ni + ne - 1;

                ni -= 1;
                if (ni > c || nj > c || ni < 0)
                {
                    printf("Ошибка");
                    _getch();
                    break;
                }

                c -= ne;

                for (i = ni; i <= c; i++)
                {
                    nep[i] = nep[i + ne];
                }

                printf("\n\n");
                for (i = 0, n = 1; i < c; i++, n++)
                {
                    printf("%-3d ", nep[i]);
                }

                printf("\n\n");


            }

            
            printf("\n\n");
            _getch();
            break;
        }
    }
}
