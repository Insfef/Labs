#include <iostream>
using namespace std;

void comp(int nep[]) {
	for (int i = 0; i < 5; i++)
		nep[i] = rand() % 9 + 1;
}

void print(int nep[])
{
	for (int i = 0; i < 5; i++)
		printf("%2d", nep[i]);
	putchar('\n');
}

int iffy(int nep[], int i) {
	if (i == 5)
		return 1;

	if (nep[i] % 2 == 1)
		return nep[i] * iffy(nep, i + 1);

	return iffy(nep, i + 1);

}

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "ru");
	std::system("chcp 1251");
	int ans = 0;
	int nep[5];

	while (ans != 3)
	{
		printf("1 – сгенерировать и напечатать массив, 2 – сумма нечётных элементов, 3 - закончить > ");
		cin >> ans;
		putchar('\n');
		switch (ans) {
		case 1:
			system("CLS");
			comp(nep);
			print(nep);
			break;
		case 2:
			system("CLS");
			print(nep);
			putchar('\n');
			cout << iffy(nep, 0) << endl;
			break;

		}

	}
	return 0;
}
