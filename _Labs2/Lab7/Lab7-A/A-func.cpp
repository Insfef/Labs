#include "A-hdr.h"

void fill(int* mas) {
	char k = '0';
	while (k != '1' && k != '2') {	
		cout << "\n 1. Заполнить массив с экрана\n 2. Заполнить массив случайным образом\n\n\t>>";
		cin >> k;
		system("CLS");
	}

	if (k == '1')
		for (int i = 0; i < S; i++) {
			cout << "\n Введите элемент №" << i + 1 << " >> ";
			cin >> *(mas + i);
		}
	if (k == '2')
		for (int i = 0; i < S; i++)
			*(mas + i) = rand() % 10;

	system("CLS");
}

void wrt(int* mas, int k) {
	FILE* f;
	
	if (k == 1)
		fopen_s(&f, "f1.txt", "w");
	else
		fopen_s(&f, "f2.txt", "w");
	
	for (int i = 0; i < S; i++)
		fprintf(f, "%d ", *(mas + i));

	fclose(f);
}

void rdf(int* mas, int k) {
	FILE* f;

	if (k == 1)
		fopen_s(&f, "f1.txt", "r");
	else
		fopen_s(&f, "f2.txt", "r");

	for (int i = 0; i < S; i++)
		fscanf_s(f, "%d", &*(mas + i));

	fclose(f);
}

void prnt(int* mas) {
	system("CLS");
	for (int i = 0; i < S; i++)
		printf("\nЭлемент №%d >> %d\n", (i + 1), *(mas + i));
	cout << "\n----------------------------------------------\n";
}

void prnt_x() {
	FILE* f;
	int x;
	system("CLS");

	fopen_s(&f, "f2.txt", "r");
	for (int i = 0; i < S; i++){
		fscanf_s(f, "%d", &x);
		printf("\nЭлемент №%d >> %d\n", (i + 1), x);
	}
	fclose(f);
	cout << "\n----------------------------------------------\n";
}