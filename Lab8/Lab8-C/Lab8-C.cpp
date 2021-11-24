
#define  _CRT_SECURE_NO_WARNINGS
#include "windows.h"
#include <iostream>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    long c, d, n, i, j, k;
    double a, f, g, h;
    long b;
    printf("Введите число > ");
    scanf("%lf", &a);
    putchar('\n');

    //нахождение количества цифр в введенном с экрана числе
    for (n = 1; a >= 10; n++)
    {
        a /= 10;
    }
    printf("Количество цифр в введенном с экрана числе: %d\n\n", n);

    a += 0.000000000000001;
    int nep[15];

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
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d", nep[i]);
    }
    printf("\n\n");
    
    //сумма цифр введенного с экрана числа
    for (i = 0, k = nep[i]; i < (n - 1); i++)
    {
        k += nep[i + 1];
    }
    printf("Сумма цифр введенного с экрана числа: %d\n\n", k);

    return 0;
}