#include "F_sort.h"
#include <iostream>
using namespace std;

#define DEBUG

void sort(lists nep[]) {
#ifdef DEBUG
	cout << __DATE__ << endl << __TIME__ << endl << __FILE__ << endl << "Имя функции: " << __FUNCTION__ << endl << endl;
#endif
	lists x;
	int i, j, m, n = 10;

	for (i = 0; i < n - 1; i++) {
		m = i;
		for (j = i + 1; j < n; j++)
			if (strcmp(nep[m].name, nep[j].name) < 0) m = j;
		if (m > i) {

			x = nep[i];
			nep[i] = nep[m];
			nep[m] = x;
		}

	}
}
