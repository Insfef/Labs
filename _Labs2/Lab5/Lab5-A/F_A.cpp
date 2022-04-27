#include "H_A.h"
#define k1 10
#define k2 -1
#define k3 k1 - k2

void nep_gen(int** nep, int S)
{
    for (int i = 0; i < S; i++)
        for (int j = 0; j < S; j++)
            *(*(nep + i) + j) = rand() % k1 - k2;
}

void nep_out(int** nep, int S)
{
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++) {
            printf("%3d", *(*(nep + i) + j));
        }
        cout << "\n";
    }
    cout << "\n\n";
}

int* nep_risu(int** A, int* A1, int* A2, int* p1, int* p2)
{
    int S1 = 0, S2 = 0;
    for (int i = 0, n = 0; n == 0; i++) {
        if (*(A1 + i) == k3)
            n++;
        else
            S1++;
    }

    for (int i = 0, n = 0; n == 0; i++) {
        if (*(A2 + i) == k3)
            n++;
        else
            S2++;
    }
    
    int* risu = new int[2];
    *p1 = 0;
    *p2 = 1;

    for (int i = 0, j = 0; i < S1; i++, j++) {
        *p1 += *(*(A + i) + (j));
    }
    for (int i = S1 - 1, j = 0; i > -1; i--, j++) {
        *p2 *= *(*(A + i) + (j));
    }
    *risu = *p1;
    *(risu + 1) = *p2;

    return risu;
}

void nep_mami(int** A, int* A1, int* A2, int S)
{
    for (int i = 0, n = **A; i < S; i++) {
        n = *(*(A)+i);
        for (int j = 1; j < S; j++)
        {
            if (*(*(A + j) + (i)) < n)
                n = *(*(A + j) + (i));
        }
        *(A1 + i) = n;
    }
    cout << "\n\n" << "Минимальные элементы каждого столбца\n";

    for (int i = 0; i < S; i++) {
        cout << *(A1 + i) << "\t";
    }

    for (int i = 0, n = **A; i < S; i++) {
        n = **(A + i);
        for (int j = 1; j < S; j++)
        {
            if (*(*(A + i) + (j)) > n)
                n = *(*(A + i) + (j));
        }
        *(A2 + i) = n;
    }

    cout << "\n\n" << "Максимальные элементы каждой строки\n";

    for (int i = 0; i < S; i++) {
        cout << *(A2 + i) << "\t";
    }

    *(A2 + S) = k3;
    *(A1 + S) = k3;

    cout << "\n\n";
}