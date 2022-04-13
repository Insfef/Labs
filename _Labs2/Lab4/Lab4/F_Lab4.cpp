#include "H_Lab4.h"

void pos_vert(int* nep, int* gear, int s)
{
	for (int i = 0; i < s; i++) {
		cout << *(gear + i) << "\t";
	}
	cout << "-\tНачальный массив";
	cout << endl << endl;

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

	for (int i = 0; i < s; i++)
	{
		if (*(gear + i) > 0)
			*(nep + i) = *(gear + i);
		else
			*(nep + i) = iffy;

		cout << *(nep + i) << "\t";
	}
	cout << "-\tОброботанный массив";
	cout << endl << endl;
}

void nepgear(int* nep, int* gear, int s)
{
	for (; nep < gear + s; nep++)
	{
		*nep = rand() % 100 - 50;
	}
	nep = gear;
	for (int i = 0; i < s; i++) {
		cout << *(nep + i) << "\t";
	}
	cout << "-\tНачальный массив";
	cout << endl << endl;
}
