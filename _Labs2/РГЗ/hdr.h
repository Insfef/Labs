#pragma once
#include <fstream>

System::String^ cipher_caesar(wchar_t* txt_proc, System::String^ txt, wchar_t stop);

System::String^ cipher_atbash(wchar_t* txt_proc, System::String^ txt, wchar_t stop);

System::String^ cipher_rot13(wchar_t* txt_proc, System::String^ txt, wchar_t stop);

System::String^ decipher_caesar(wchar_t* txt_proc, System::String^ txt, wchar_t stop);

System::String^ decipher_rot13(wchar_t* txt_proc, System::String^ txt, wchar_t stop);