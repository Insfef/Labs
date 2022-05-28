#include "hdr.h"

wchar_t ru[] = L"абвгдеёжзийклмнопрстуфхцчшщъыьэюяабвгдеёжзий";
wchar_t ruA[] = L"АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯАБВГДЕЁЖЗИЙ";

wchar_t eng[] = L"abcdefghijklmnopqrstuvwxyzabcdefghijklm";
wchar_t engA[] = L"ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM";

System::String^ cipher_caesar(wchar_t* txt_proc, System::String^ txt, wchar_t stop) {
	System::String^ txt2;
	for (int i = 0, iffy = 0; txt[i] != stop; i++, iffy = 0) {
		*(txt_proc + i) = txt[i];

		for (int j = 0; j < 33; j++) {
			if (*(txt_proc + i) == *(eng + j)) {
				*(txt_proc + i) = *(eng + j + 3);
				break;
			}
			if (*(txt_proc + i) == *(engA + j)) {
				*(txt_proc + i) = *(engA + j + 3);
				break;
			}
			if (*(txt_proc + i) == *(ru + j)) {
				*(txt_proc + i) = *(ru + j + 3);
				break;
			}
			if (*(txt_proc + i) == *(ruA + j)) {
				*(txt_proc + i) = *(ruA + j + 3);
				break;
			}
		}
		txt2 += *(txt_proc + i);
	}
	return txt2;
}

System::String^ cipher_atbash(wchar_t* txt_proc, System::String^ txt, wchar_t stop) {
	System::String^ txt2;
	for (int i = 0, iffy = 0; txt[i] != stop; i++, iffy = 0) {
		*(txt_proc + i) = txt[i];

		for (int j = 0; j < 33; j++) {
			if (*(txt_proc + i) == *(eng + j)) {
				*(txt_proc + i) = *(eng + 25 - j);
				break;
			}
			if (*(txt_proc + i) == *(engA + j)) {
				*(txt_proc + i) = *(engA + 25 - j);
				break;
			}
			if (*(txt_proc + i) == *(ru + j)) {
				*(txt_proc + i) = *(ru + 32 - j);
				break;
			}
			if (*(txt_proc + i) == *(ruA + j)) {
				*(txt_proc + i) = *(ruA + 32 - j);
				break;
			}
		}
		txt2 += *(txt_proc + i);
	}
	return txt2;
}

System::String^ cipher_rot13(wchar_t* txt_proc, System::String^ txt, wchar_t stop) {
	System::String^ txt2;
	for (int i = 0, iffy = 0; txt[i] != stop; i++, iffy = 0) {
		*(txt_proc + i) = txt[i];

		for (int j = 0; j < 33; j++) {
			if (*(txt_proc + i) == *(eng + j)) {
				*(txt_proc + i) = *(eng + 13 + j);
				break;
			}
			if (*(txt_proc + i) == *(engA + j)) {
				*(txt_proc + i) = *(engA + 13 + j);
				break;
			}
			if (*(txt_proc + i) == *(ru + j)) {
				*(txt_proc + i) = *(ru + 11 + j);
				break;
			}
			if (*(txt_proc + i) == *(ruA + j)) {
				*(txt_proc + i) = *(ruA + 11 + j);
				break;
			}
		}
		txt2 += *(txt_proc + i);
	}
	return txt2;
}

System::String^ decipher_caesar(wchar_t* txt_proc, System::String^ txt, wchar_t stop) {
	System::String^ txt2;
	for (int i = 0, iffy = 0; txt[i] != stop; i++, iffy = 0) {
		*(txt_proc + i) = txt[i];

		for (int j = 3; j < 36; j++) {
			if (*(txt_proc + i) == *(eng + j)) {
				*(txt_proc + i) = *(eng + j - 3);
				break;
			}
			if (*(txt_proc + i) == *(engA + j)) {
				*(txt_proc + i) = *(engA + j - 3);
				break;
			}
			if (*(txt_proc + i) == *(ru + j)) {
				*(txt_proc + i) = *(ru + j - 3);
				break;
			}
			if (*(txt_proc + i) == *(ruA + j)) {
				*(txt_proc + i) = *(ruA + j - 3);
				break;
			}
		}
		txt2 += *(txt_proc + i);
	}
	return txt2;
}

System::String^ decipher_rot13(wchar_t* txt_proc, System::String^ txt, wchar_t stop) {
	System::String^ txt2;
	for (int i = 0, iffy = 0; txt[i] != stop; i++, iffy = 0) {
		*(txt_proc + i) = txt[i];

		for (int j = 0; j < 33; j++) {
			if (*(txt_proc + i) == *(eng + 13 + j)) {
				*(txt_proc + i) = *(eng + j);
				break;
			}
			if (*(txt_proc + i) == *(engA + 13 + j)) {
				*(txt_proc + i) = *(engA + j);
				break;
			}
			if (*(txt_proc + i) == *(ru + 11 + j)) {
				*(txt_proc + i) = *(ru + j);
				break;
			}
			if (*(txt_proc + i) == *(ruA + 11 + j)) {
				*(txt_proc + i) = *(ruA + j);
				break;
			}
		}
		txt2 += *(txt_proc + i);
	}
	return txt2;
}