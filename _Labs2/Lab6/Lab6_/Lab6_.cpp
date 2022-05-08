#include "0_H.h"

int main(void) {
    srand(time(NULL));
    setlocale(LC_ALL, "ru");

    char S1[80] = "nep";
    char S2[80] = " n e p ";
    
    for (int ans = 1; ans != 4;)
    {

        cout << "Текст в первой строке - \"" << S1 << "\"\n\n";
        cout << "Текст во второй строке - \"" << S2 << "\"\n\n";
        cout << "1 – Изменить первую строку, 2 – Изменить вторую строку, 3 - Сравнить строки (без учёта пробелов), 4 - Закончить > ";
        cin >> ans;
        switch (ans)
        {
        case 1:
            system("CLS");
            cout << "   >>";

            cin.ignore();
            gets_s(S1);

            system("CLS");
            break;

        case 2:
            system("CLS");
            cout << "   >>";

            cin.ignore();
            gets_s(S2);

            system("CLS");
            break;

        case 3:
            system("CLS");
            if (compa(S1, S2) == 1)
                cout << "\t*Строки идентичны*\n\n";
            else
                cout << "\t* !!! Строки различны !!! *\n\n";
            break;
        }
    }




}