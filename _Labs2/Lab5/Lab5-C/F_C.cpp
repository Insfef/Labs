#include "H_C.h"
#define k1 20
#define k2 10

void nep_gen(int* nep, int S)
{
    for (int i = 0; i < S; i++)
        *(nep + i) = rand() % 20;
}

void nep_out(int* nep, int S)
{
    for (int i = 0; i < S; i++) {
        printf("%3d", *(nep + i));
        /*if (i % S == S - 1) cout << '\n';*/
    }
    cout << "\n\n";
}

//void swap(int a, int b)
//{
//    a += b;
//    b = a - b;
//    a -= b;
//}
void swap(int* nep, int a, int b)
{
    *(nep + a) = *(nep + b) + *(nep + a);
    *(nep + b) = *(nep + a) - *(nep + b);
    *(nep + a) = *(nep + a) - *(nep + b);
}

void bubble_sort(int* nep, int S)
{
    cout << "\n     *Выбрана пузырьковая сортировка*\n";
    int i, j;
    for (i = 0; i < S - 1; i++)
        for (j = 0; j < S - i - 1; j++)
            if (*(nep + j) > *(nep + j + 1))
                swap(nep, j, j + 1);
}

void shuttle_sort(int *nep, int S)
{
    cout << "\n     *Выбрана челночная сортировка*\n";
    for (int i = 1; i < S; i++)
        if (*(nep + i) < *(nep + i - 1)){
            swap(nep, i, i - 1);
            for (int j = i - 1; (j - 1) >= 0; j--){
                if (*(nep + j) < *(nep + j - 1))
                    swap(nep, j, j - 1);
                else
                    break;
            }
        }
}

void sort_nep(int* nep, int S, void (*uni)(int* nep, int S))
{    
    uni(nep, S);
}


