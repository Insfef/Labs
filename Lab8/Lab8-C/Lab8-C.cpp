
#define  _CRT_SECURE_NO_WARNINGS
#include "windows.h"
#include <iostream>
#include <conio.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    long c, d, n, j, k, y;
    double a, f, g, h;
    long b;
    int i;
    while (true)
    {

        system("cls");
    printf("Введите число > ");
    scanf("%lf", &a);
    putchar('\n');
  
    //нахождение количества цифр в введенном с экрана числе
    for (n = 1; a >= 10; n++)
    {
        a /= 10;
    }
    printf("Количество цифр в введенном с экрана числе: %d\n\n", n);
    if (n > 9)
    {
        printf("Ошибка, число слишком большое");
        _getch();
        break;
    }

    a += 0.000000000000001;
    int nep[9];
    int iffy[100];
    //заполнение одномерного массива цифрами введенного с экрана числа
    for (i = 0; i < n; i++)
    {
        c = a;
        nep[i] = a;
        
        d = c * 10;
        a = (a * 10) - d;
    }
    
    //печать введенного с экрана числа в обратном порядке
    printf("Введенное число записанное в обратном порядке: ");
    for (i = n - 1, y = 0; i >= 0; i--, y++)
    {
        iffy[y] = nep[i];
    }
    int h = n;
    for (i = 0, y = 0; i < n; i++, h--)
    {
        for (j = 0, d = 1; j < h - 1; j++, d *= 10);
        y += iffy[i] * d;

    }

    printf("%d", y);
    printf("\n\n");
    //сумма цифр введенного с экрана числа
    for (i = 0, k = nep[i]; i < (n - 1); i++)
    {
        k += nep[i + 1];
    }
    printf("Сумма цифр введенного с экрана числа: %d\n\n", k);

    _getch();
    }
    return 0;
}