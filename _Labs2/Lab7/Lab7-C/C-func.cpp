#include "C-hdr.h"

void f_fill(FILE* f) {
	char k = '0';
	int rannum;

	/*while (k != '1' && k != '2') {
		cout << "\n 1. Ввод данных с экрана\n 2. Запись случайных данных\n\n\t>>";
		cin >> k;
		system("CLS");
	}*/

	/*if (k == '1')
		for (int i = 0; i < S; i++) {
			cout << "\n Введите элемент №" << i + 1 << " >> ";
		}
	if (k == '2')*/
	fseek(f, 0, SEEK_SET);
	for (int i = 0; i < S; i++) {
		rannum = rand() % 10;
		fwrite(&rannum, sizeof(int), 1, f);
	}
	system("CLS");
}

void fnd_mina(FILE* f) {
	int x = 0, mina_n = 999;
	int mina;
	int mina_i = 0;
	fseek(f, 0, SEEK_SET);
	fread(&mina, sizeof(int), 1, f);
	for (int i = 1; i < S; i++) {
		fread(&x, sizeof(int), 1, f);
		if (x < mina) {
			mina = x;
			mina_i = i;
		}
	}
	fseek(f, mina_i * sizeof(int), SEEK_SET);
	fwrite(&mina_n, sizeof(int), 1, f);

	fseek(f, 0, SEEK_SET);
	for (int i = 0; i < S; i++) {
		fread(&x, sizeof(int), 1, f);
		printf("Число №%3d >> %d\n", i + 1, x);
	}

	printf("\n\n Минимальное число = %d и имеет номер %d\n\n", mina, mina_i + 1);
	cout << "----------------------------------------------\n";
}

void fnd_sum(FILE* f) {
	int sum = 0;
	int x = 0;

	cout << "\nДанные из файла:\n\n";
	fseek(f, 0, SEEK_SET);
	for (int i = 0; i < S; i++) {
		fread(&x, sizeof(int), 1, f);
		if (i == 2 || i == 5 || i == 9)
			sum += x;
		printf("Число №%3d >> %d\n", i + 1, x);
	}

	printf("\n\n Сумма чисел №3, №6 и №10 = %d\n\n", sum);
	cout << "----------------------------------------------\n";
}