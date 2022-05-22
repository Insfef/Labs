#include "B-hdr.h"

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

void wrt(int* mas) {
	FILE* f;
	
	fopen_s(&f, "f1.dat", "wb");

	fwrite(mas, sizeof(int), S, f);

	fclose(f);
}

void rdf(int* mas) {
	FILE* f;
	int sum = 0;

	fopen_s(&f, "f1.dat", "rb");
	for (int i = 0; i < S; i++) {
		fread(&*(mas + i), sizeof(int), S, f);
		if (*(mas + i) % 2 == 0)
		sum += *(mas + i);
	}
	fclose(f);

	cout << "\nМассив элементов >> ";
	for (int i = 0; i < S; i++)
		cout << *(mas + i) << " ";

	printf("\n\n Сумма чётных элементов = %d\n\n", sum);
}