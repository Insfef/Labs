#include "H_Lab3.h"

void pos_vert(int* nep, int* gear, int s, int vert)
{
	for (int i = 0; i < s; i++)
	{
		if (*(gear + i) > 0)
			*(nep + i) = *(gear + i);
		else
			*(nep + i) = vert;

		cout << *(nep + i) << "\t";
	}
	cout << "-\tОброботанный массив";
	cout << endl << endl;
}

int min_blanc(int* gear, int s)
{
	int iffy;
	if (*gear > 0)
		iffy = *gear;
	else
		iffy = 50;

	for (int i = 0; i < s - 1; i++)
	{
		if (iffy > *(gear + i + 1) && *(gear + i + 1) > 0)
			iffy = *(gear + i + 1);
	}
	return iffy;
}

void nepgear(int* nep, int* gear, int s)
{
	for (; nep < gear + s; nep++)
	{
		*nep = rand() % 100 - 50;
	}
	nep = gear;
}

void print_nep(int* nep, int s)
{
	for (int i = 0; i < s; i++) {
		cout << *(nep + i) << "\t";
	}
	cout << "-\tИсходный массив";
	cout << endl << endl;
}
