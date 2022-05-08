#include "H_B.h"

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    int** A;

    int a = 0;
    int S;
    int risu;
    int (*uni)(int**, int);

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
            if (S > 9) {
                cout << "Размерность слишком велика\n";
                exit(0);
            }
            a = 1;
            break;
        case 2:
            if (a == 1)
            {
                A = new int* [S];
                for (int i = 0; i < S; i++)
                    A[i] = new int[S];
                system("CLS");

                cout << "Двумерный массив элементов\n";

                nep_gen(A, S);  //генерация двумерного массива
                nep_out(A, S);  //вывод на экран двумерного массива

                uni = nep_1;
                risu = uni(A, S);
                cout << "Сумма положительных элементов = " << risu << "\n";

                uni = nep_2;
                risu = uni(A, S);
                cout << "\nПроизведение отрицательных элементов = " << risu << "\n\n\n";

                delete[] A;
            }
            else
            {
                system("CLS");
                cout << "Размерность не выбрана\n\n";
            }
            break;
        }
    }
    
}