#include "H_Lab5-1.h"

#if k == 1
void nep_exec()
{
    int* Ar;
    int* p;
    int S = 1;
    int a = 0;
    Ar = new int [S];

    for (int ans = 1; ans != 3;)
    {
        cout << "1 – Размерность массива, 2 – Генерация и обработка массива, 3 - Закончить > ";

        cin >> ans;
        switch (ans)
        {
        case 1:
            system("CLS");
            cout << "Введите размерность матрицы >";
            cin >> S;
            if (S <= 0) {
                cout << "Размерность слишком мала\n";
                exit(0);
            }
            if (S > 30) {
                cout << "Размерность слишком велика\n";
                exit(0);
            }
            a = 1;
            break;
        case 2:
            if (a == 1)
            {
                delete[] Ar;

                Ar = new int [S * S];

                system("CLS");

                cout << "Начальный массив\n";
                nep_gen(Ar, S);
                nep_out(Ar, S);

                p = nep_ref(Ar, S);

                cout << "Обработанный массив\n";
                nep_out(p, S);
                delete[] p;
            }
            else
            {
                system("CLS");
                cout << "Размерность не выбрана\n\n";
            }
            break;
        }
    }
    delete[] Ar, p;
}
#endif


#if k == 2
void nep_exec()
{
    int** Ar;

    int** p;
    int S = 1;
    int a = 0;
    Ar = new int* [S];

    for (int ans = 1; ans != 3;)
    {
        cout << "1 – Размерность массива, 2 – Генерация и обработка массива, 3 - Закончить > ";

        cin >> ans;
        switch (ans)
        {
        case 1:
            system("CLS");
            cout << "Введите размерность матрицы >";
            cin >> S;
            if (S <= 0) {
                cout << "Размерность слишком мала\n";
                exit(0);
            }
            if (S > 30) {
                cout << "Размерность слишком велика\n";
                exit(0);
            }
            a = 1;
            break;
        case 2:
            if (a == 1)
            {
                delete[] Ar;

                Ar = new int* [S];
                for (int i = 0; i < S; i++) {
                    Ar[i] = new int[S];
                }


                system("CLS");
                nep_gen(Ar, S);
                nep_out(Ar, S);

                p = nep_ref(Ar, S);

                nep_out(p, S);
                delete[] p;
            }
            else
            {
                system("CLS");
                cout << "Размерность не выбрана\n\n";
            }
            break;
        }
    }

    delete[] Ar, p;
}
#endif
