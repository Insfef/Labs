#include "H_Lab3a.h"

void nep_gen(int* nep)
{
	for (int i = 0; i < s; i++)
	{
		*(nep + i) = rand() % 10 - 5;
		cout << *(nep + i) << "\t";
	}
	cout << endl;
}

void nep_a(int* nep)		//а) относительный адрес
{
	int sum = 0;
	int n = 0;
	for (int i = 0; i < s; i++)
	{
		if (*(nep + i) < 0) {
			sum += *(nep + i);
			n++;
		}
	}
	cout << sum << " - Сумма отрицательных элементов \n" << n << " - Количество отрицательных элементов \n\n";
}

void nep_b(int* nep)		//б) через абсолютный адрес
{
	int sum = 0;
	int n = 0;
	for (int i = 0; i < s; i++)
	{
		if (*nep < 0) {
			sum += *nep;
			n++;
		}
		nep++;
	}
	cout << sum << " - Сумма отрицательных элементов \n" << n << " - Количество отрицательных элементов \n\n";
}

void nep_c(int* nep)		//в) не использовать адресацию
{
	int sum = 0;
	int n = 0;
	int* gear = new int[s];
	gear = nep;

	for (; nep < gear + s; nep++)
	{
		if (*nep < 0) {
			sum += *nep;
			n++;
		}
	}
	cout << sum << " - Сумма отрицательных элементов \n" << n << " - Количество отрицательных элементов \n\n";
}

void nep_d(int* nep)		//г) через массив указателей;
{
	int sum = 0;
	int n = 0;
	/*int nepu[s];*/
	int* nep_poi = new int[s];

	//for (int i = 0; i < s; i++)
	//	nepu[i] = *(nep + i);

	for (int i = 0; i < s; i++)
	{
		nep_poi = (nep + i);
		nep_poi++;
	}
	nep_poi = nep;

	for (int i = 0; i < s; i++)
	{
		if (*(nep_poi + i) < 0) {
			sum += *(nep_poi + i);
			n++;
		}
	}
	cout << sum << " - Сумма отрицательных элементов \n" << n << " - Количество отрицательных элементов \n\n";
}

void nep_e(int* nep)		//д) через указатель на указатель
{
	int sum = 0;
	int n = 0;
	int** nepsi = &nep;
	for (int i = 0; i < s; i++)
	{
		if (*((*nepsi) + i) < 0) {
			sum += *((*nepsi) + i);
			n++;
		}
	}
	cout << sum << " - Сумма отрицательных элементов \n" << n << " - Количество отрицательных элементов \n\n";
}

void nep_f(int* nep)		//е) оформить в виде функции с параметрами указателями
{
	int sum = 0;
	int n = 0;
	int* gear = new int[s];
	gear = nep;

	for (; nep < gear + s; nep++)
	{
		if (*nep < 0) {
			sum += *nep;
			n++;
		}
	}
	cout << sum << " - Сумма отрицательных элементов \n" << n << " - Количество отрицательных элементов \n\n";
}

void print_nep(int* nep)
{
	for (int i = 0; i < s; i++) {
		cout << *(nep + i) << "\t";
	}
	cout << "-\tИсходный массив";
	cout << endl << endl;
}