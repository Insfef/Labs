#include "H_Lab5-1.h"


#if k == 1

void nep_gen(int* nep, int S)
{			
	for (int i = 0; i < S * S; i++)
		*(nep + i) = rand() % 20;
}

void nep_out(int* nep, int S)
{
    for (int i = 0; i < S * S; i++) {
        printf("%3d", *(nep + i));
        if (i % S == S - 1) cout << '\n';
    }
    cout << "\n\n";
}

int* nep_ref(int* nep, int S)
{
    int* blanc = new int[S * S];
    int n = 0;
    for (int i = S -  1; i > -1; i--) {
        for (int j = S - 1; j > -1; n++, j--) {
            *(blanc + n) = *(nep + i + (j * S));
        }
    }
    return blanc;
}
#endif

#if k == 2
void nep_gen(int** nep, int S)
{
    for (int i = 0; i < S; i++)
        for (int j = 0; j < S; j++)
            *(*(nep + i) + j) = rand() % 20;
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

int** nep_ref(int** nep, int S)
{
    int** blanc = new int* [S];
    for (int i = 0; i < S; i++) {
        blanc[i] = new int[S];
    }

    for (int i = S - 1, n = 0; i > -1; n++, i--) {
        for (int j = S - 1, nn = 0; j > -1; nn++, j--)
        {
            *(*(blanc + nn) + (n)) = *(*(nep + i) + (j));
        }
        cout << '\n';
    }
    return blanc;
}
#endif