#include "H_C.h"

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    int* A;

    int a = 0;
    int S;
    int risu;
    void (*uni)(int* nep, int S);
    uni = bubble_sort;

    for (int ans = 1, ans2; ans != 3;)
    {
        cout << "1 – Количество элементов массива, 2 – Генерация и сортировка массива, 3 - Закончить > ";

        cin >> ans;
        switch (ans)
        {
        case 1:
            system("CLS");
            cout << "Введите количество элементов >";
            cin >> S;
            if (S <= 0) {
                cout << "Выберете число побольше\n";
                exit(0);
            }
            if (S > 9) {
                cout << "Выберите число поменьше\n";
                exit(0);
            }
            a = 1;
            break;
        case 2:
            if (a == 1)
            {
                A = new int[S];
                ans2 = 0;
                system("CLS");

                cout << " -Массив элементов\n _ ";

                nep_gen(A, S);  //генерация двумерного массива
                nep_out(A, S);  //вывод на экран двумерного массива

                for (; ans2 != 1 && ans2 != 2;)
                {
                    cout << "Выберите метод сортировки: 1 - Пузырьковая сортировка, 2 - Челночная сортировка > ";
                    cin >> ans2;
                    switch (ans2)
                    {
                    case 1:
                        uni = bubble_sort;
                        break;
                    case 2:
                        uni = shuttle_sort;
                        break;
                    }
                }

                sort_nep(A, S, uni); //функция, которая исполнаяет одну из функций сортировок
                cout << "\n -Отсортированный массив элементов\n _ ";
                nep_out(A, S);

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