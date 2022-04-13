#include "H_Lab3.h"

void pos_vert(int* nep, int* gear, int s, int vert)
{
	int n = 0;

	for (int i = 0; i < s; i++)
	{
		if (*(gear + i) > 0)
			n++;
	}

	int* nep_pos = new int[n];

	for (int i = 0, in = 0; i < s; i++)
	{
		if (*(gear + i) > 0)
		{
			*(nep_pos + in) = *(gear + i);
			cout << *(nep_pos + in) << "\t";
			in++;
		}
	}
	cout << "-\tМассив положительных элементов";
	cout << "\n\n";

	for (int i = 0; i < s; i++)
	{
		if (*(gear + i) > 0)
			*(nep + i) = *(gear + i);
		else
			*(nep + i) = vert;

		cout << *(nep + i) << "\t";
	}
	cout << "-\tОброботанный начальный массив";
	cout << endl << endl;
	delete[] nep_pos;
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
		if (iffy > *(gear + i + 1))
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
	cout << "-\tНачальный массив";
	cout << endl << endl;
}
