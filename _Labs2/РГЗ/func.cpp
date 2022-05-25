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

System::String^ cipher_caesar(wchar_t* a, System::String^ txt, wchar_t stop) {
	System::String^ txt2;
	txt += stop;
	for (int i = 0; txt[i] != stop; i++) {
		*(a + i) = txt[i];

		for (int j = 0; j < 26; j++) {
			if (*(a + i) == *(eng + j)) {
				*(a + i) = *(eng + j + 3);
				break;
			}
			if (*(a + i) == *(engA + j)) {
				*(a + i) = *(engA + j + 3);
				break;
			}
		}
		for (int j = 0; j < 33; j++) {
			if (*(a + i) == *(ru + j)) {
				*(a + i) = *(ru + j + 3);
				break;
			}
			if (*(a + i) == *(ruA + j)) {
				*(a + i) = *(ruA + j + 3);
				break;
			}
		}
		txt2 += *(a + i);
	}
	return txt2;
}

System::String^ cipher_atbash(wchar_t* a, System::String^ txt, wchar_t stop) {
	System::String^ txt2;
	txt += stop;
	for (int i = 0; txt[i] != stop; i++) {
		*(a + i) = txt[i];

		for (int j = 0; j < 26; j++) {
			if (*(a + i) == *(eng + j)) {
				*(a + i) = *(eng + 25 - j);
				break;
			}
			if (*(a + i) == *(engA + j)) {
				*(a + i) = *(engA + 25 - j);
				break;
			}
		}
		for (int j = 0; j < 33; j++) {
			if (*(a + i) == *(ru + j)) {
				*(a + i) = *(ru + 32 - j);
				break;
			}
			if (*(a + i) == *(ruA + j)) {
				*(a + i) = *(ruA + 32 - j);
				break;
			}
		}
		txt2 += *(a + i);
	}
	return txt2;
}

System::String^ cipher_rot13(wchar_t* a, System::String^ txt, wchar_t stop) {
	System::String^ txt2;
	txt += stop;
	for (int i = 0; txt[i] != stop; i++) {
		*(a + i) = txt[i];

		for (int j = 0; j < 26; j++) {
			if (*(a + i) == *(eng + j)) {
				*(a + i) = *(ROTeng + j);
				break;
			}
			if (*(a + i) == *(engA + j)) {
				*(a + i) = *(ROTengA + j);
				break;
			}
		}
		for (int j = 0; j < 33; j++) {
			if (*(a + i) == *(ru + j)) {
				*(a + i) = *(ROTru + j);
				break;
			}
			if (*(a + i) == *(ruA + j)) {
				*(a + i) = *(ROTruA + j);
				break;
			}
		}
		txt2 += *(a + i);
	}
	return txt2;
}

System::String^ decipher_caesar(wchar_t* a, System::String^ txt, wchar_t stop) {
	System::String^ txt2;
	txt += stop;
	for (int i = 0; txt[i] != stop; i++) {
		*(a + i) = txt[i];

		for (int j = 3; j < 29; j++) {
			if (*(a + i) == *(eng + j)) {
				*(a + i) = *(eng + j - 3);
				break;
			}
			if (*(a + i) == *(engA + j)) {
				*(a + i) = *(engA + j - 3);
				break;
			}
		}
		for (int j = 3; j < 36; j++) {
			if (*(a + i) == *(ru + j)) {
				*(a + i) = *(ru + j - 3);
				break;
			}
			if (*(a + i) == *(ruA + j)) {
				*(a + i) = *(ruA + j - 3);
				break;
			}
		}
		txt2 += *(a + i);
	}
	return txt2;
}

System::String^ decipher_rot13(wchar_t* a, System::String^ txt, wchar_t stop) {
	System::String^ txt2;
	txt += stop;
	for (int i = 0; txt[i] != stop; i++) {
		*(a + i) = txt[i];

		for (int j = 0; j < 26; j++) {
			if (*(a + i) == *(eng + j)) {
				*(a + i) = *(ROTeng + j);
				break;
			}
			if (*(a + i) == *(engA + j)) {
				*(a + i) = *(ROTengA + j);
				break;
			}
		}
		for (int j = 0; j < 33; j++) {
			if (*(a + i) == *(ru + j)) {
				*(a + i) = *(de_ROTru + j);
				break;
			}
			if (*(a + i) == *(ruA + j)) {
				*(a + i) = *(de_ROTruA + j);
				break;
			}
		}
		txt2 += *(a + i);
	}
	return txt2;
}