#include "H_A.h"

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
	int** A;
    int* A1, * A2, * p1 = 0, * p2 = 0, * res;
    p1 = new int;
    p2 = new int;

    res = new int[2]; //массив, в котором выделена память для хранения значений суммы ГД и произведения ПД
    int a = 0;
    int S;

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
                A = new int * [S];
                for (int i = 0; i < S; i++)
                    A[i] = new int[S];
                A1 = new int[S + 1];
                A2 = new int[S + 1];
                system("CLS");

                cout << "Двумерный массив элементов\n";
                nep_gen(A, S);  //генерация двумерного массива
                nep_out(A, S);  //вывод на экран двумерного массива
                
                nep_mami(A, A1, A2, S); //нахождение и вывод на экран минимальных значений в столбцах и максимальных в строках

                res = nep_risu(A, A1, A2, p1, p2);  //нахождение и помещение в массив "res" значений суммы ГД и произведения ПД
                
                cout << "Сумма элементов ГД\n" << *res << "\n\nПроизведение элементов ПД\n" << *(res + 1) << "\n\n"; //вывод на экран значений суммы ГД и произведения ПД

                delete[] A, A1, A2;
            }
            else
            {
                system("CLS");
                cout << "Размерность не выбрана\n\n";
            }
            break;
        }
    }


    delete p1, p2;
    delete[] res;
}




