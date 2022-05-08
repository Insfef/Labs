#include "H_B.h"
#define k1 20
#define k2 10

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

int nep_1(int** nep, int S)
{
    int risu = 0;

    for (int i = 0; i < S; i++)
        for (int j = 0; j < S; j++) 
            if (*(*(nep + i) + j) > 0)
                risu += *(*(nep + i) + j);

    return risu;
}

int nep_2(int** nep, int S)
{
    int risu = 1;
    int n = 0;

    for (int i = 0; i < S; i++)
        for (int j = 0; j < S; j++)
            if (*(*(nep + i) + j) < 0)
            {
                risu *= *(*(nep + i) + j);
                n = 1;
            }

    if (n == 1)
        return risu;
    else
        return 0;
}