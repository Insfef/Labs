
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
		*(a + i + dn) = *(b - bn);
	for (; cn > 0; cn--, i++)
		*(a + i + dn) = *(c - cn);
	for (; dn > 0; dn--, i++)
		*(a + dn - 1) = *(d - dn);


	for (int i = 0; i < s; i++)
	{
		cout << *(a + i) << "\t";
	}

	cout << "- Обработанный массив\n\n";


}
