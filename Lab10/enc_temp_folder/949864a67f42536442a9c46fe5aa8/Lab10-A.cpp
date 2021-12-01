#include "windows.h"
#include <iostream>
#include <conio.h>
#define  _CRT_SECURE_NO_WARNINGS
using namespace std;
int nep(int a, int b)
{
	char iffy;
	if (a > b)
		iffy = '>';
	if (a == b)
		iffy = '=';
	if (a < b)
		iffy = '<';

	return iffy;
}



int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	while (true)
	{

		system("cls");
		int n, nn;
		char m;
		cout << "Введите два числа для сравнения" << endl << endl;
		cout << "Введите первое число >> ";
		cin >> n;
		cout << endl << "Введите второе число >> ";
		cin >> nn;

		m = nep(n, nn);

		cout << endl << "Результат: " << n << " " << m << " " << nn << endl;

		_getch();
	}
}

