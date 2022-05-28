#pragma once
#include <string.h>
#include <cstdio>
#include <stdio.h>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <Windows.h>

#include <fstream>
#include <sstream>

System::String^ cipher_caesar(wchar_t* txt_proc, System::String^ txt, wchar_t stop);

System::String^ cipher_atbash(wchar_t* txt_proc, System::String^ txt, wchar_t stop);

System::String^ cipher_rot13(wchar_t* txt_proc, System::String^ txt, wchar_t stop);

System::String^ decipher_caesar(wchar_t* txt_proc, System::String^ txt, wchar_t stop);

System::String^ decipher_rot13(wchar_t* txt_proc, System::String^ txt, wchar_t stop);