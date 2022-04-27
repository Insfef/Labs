
#include "H_Lab3b.h"


void nep_gen(int* nep, int s)
{

	for (int i = 0; i < s; i++)
	{
		*(nep + i) = rand() % 3 - 1;
		cout << *(nep + i) << "\t";
	}
	cout << "- Исходный массив\n\n";

}

void nep_re(int* a, int s)
{
	for (int i = 0; i < s; i++)
	{
		cout << *(a + i) << "\t";
	}
	cout << "- Исходный массив \n\n";

	int bn = 0, cn = 0, dn = 0;
	for (int i = 0; i < s; i++)
	{
		if (*(a + i) < 0)
			bn++;
		if (*(a + i) > 0)
			cn++;
		if (*(a + i) == 0)
			dn++;
	}
	int* b = new int[bn];
	int* c = new int[cn];
	int* d = new int[dn];
	int* bb = b, * cc = c, * dd = d;
	for (int i = 0; i < s; i++)
	{
		if (*(a + i) < 0)
		{
			*b = *(a + i);
			b++;
		}
		if (*(a + i) > 0)
		{
			*c = *(a + i);
			c++;
		}
		if (*(a + i) == 0)
		{
			*d = *(a + i);
			d++;
		}

	}
	//b -= bn;
	//c -= cn;
	//d -= dn;

	int i = 0;

	for (; bn > 0; bn--, i++)
	{
		*(a + i + dn) = *(b - bn);
		cout << *(b - bn) << "\t";
	}
	cout << "\t- Массив В\n\n";
	for (; cn > 0; cn--, i++)
	{
		*(a + i + dn) = *(c - cn);
		cout << *(c - cn) << "\t";
	}
	cout << "\t- Массив C\n\n";
	for (; dn > 0; dn--, i++)
	{
		*(a + dn - 1) = *(d - dn);
		cout << *(d - dn) << "\t";
	}
	cout << "\t- Массив D \n\n";

	for (int i = 0; i < s; i++)
	{
		cout << *(a + i) << "\t";
	}

	c = cc, b = bb, d = dd;
	cout << "- Обработанный массив\n\n";
	delete[] c, b, d, cc, bb, dd;
}
