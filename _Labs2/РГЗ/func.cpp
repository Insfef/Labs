#include "hdr.h"

wchar_t ru[] = L"абвгдеёжзийклмнопрстуфхцчшщъыьэюяабв";
wchar_t ruA[] = L"АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯАБВ";

wchar_t eng[] = L"abcdefghijklmnopqrstuvwxyzabc";
wchar_t engA[] = L"ABCDEFGHIJKLMNOPQRSTUVWXYZABC";


wchar_t ROTru[] = L"клмнопрстуфхцчшщъыьэюяабвгдеёжзий";
wchar_t ROTruA[] = L"КЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯАБВГДЕЁЖЗИЙ";

wchar_t ROTeng[] = L"nopqrstuvwxyzabcdefghijklm";
wchar_t ROTengA[] = L"NOPQRSTUVWXYZABCDEFGHIJKLM";

wchar_t de_ROTru[] = L"хцчшщъыьэюяабвгдеёжзийклмнопрстуф";
wchar_t de_ROTruA[] = L"ХЦЧШЩЪЫЬЭЮЯАБВГДЕЁЖЗИЙКЛМНОПРСТУФ";

void cipher_caesar(wchar_t* a) {
	for (int j = 0; j < 26; j++) {
		if (*a == *(eng + j)) {
			*a = *(eng + j + 3);
			break;
		}
		if (*a == *(engA + j)) {
			*a = *(engA + j + 3);
			break;
		}
	}
	for (int j = 0; j < 33; j++) {
		if (*a == ru[j]) {
			*a = ru[j + 3];
			break;
		}
		if (*a == ruA[j]) {
			*a = ruA[j + 3];
			break;
		}
	}
}

void cipher_atbosh(wchar_t* a) {
	for (int j = 0; j < 26; j++) {
		if (*a == *(eng + j)) {
			*a = *(eng + 25 - j);
			break;
		}
		if (*a == *(engA + j)) {
			*a = *(engA + 25 - j);
			break;
		}
	}
	for (int j = 0; j < 33; j++) {
		if (*a == ru[j]) {
			*a = ru[32 - j];
			break;
		}
		if (*a == ruA[j]) {
			*a = ruA[32 - j];
			break;
		}
	}
}

void cipher_rot13(wchar_t* a) {
	for (int j = 0; j < 26; j++) {
		if (*a == *(eng + j)) {
			*a = *(ROTeng + j);
			break;
		}
		if (*a == *(engA + j)) {
			*a = *(ROTengA + j);
			break;
		}
	}
	for (int j = 0; j < 33; j++) {
		if (*a == ru[j]) {
			*a = ROTru[j];
			break;
		}
		if (*a == ruA[j]) {
			*a = ROTruA[j];
			break;
		}
	}
}

void decipher_caesar(wchar_t* a) {
	for (int j = 3; j < 29; j++) {
		if (*a == *(eng + j)) {
			*a = *(eng + j - 3);
			break;
		}
		if (*a == *(engA + j)) {
			*a = *(engA + j - 3);
			break;
		}
	}
	for (int j = 3; j < 36; j++) {
		if (*a == ru[j]) {
			*a = ru[j - 3];
			break;
		}
		if (*a == ruA[j]) {
			*a = ruA[j - 3];
			break;
		}
	}
}

void decipher_rot13(wchar_t* a) {
	for (int j = 0; j < 26; j++) {
		if (*a == *(eng + j)) {
			*a = *(ROTeng + j);
			break;
		}
		if (*a == *(engA + j)) {
			*a = *(ROTengA + j);
			break;
		}
	}
	for (int j = 0; j < 33; j++) {
		if (*a == ru[j]) {
			*a = de_ROTru[j];
			break;
		}
		if (*a == ruA[j]) {
			*a = de_ROTruA[j];
			break;
		}
	}
}