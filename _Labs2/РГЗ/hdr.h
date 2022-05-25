#pragma once
#include <string.h>
#include <cstdio>
#include <stdio.h>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <Windows.h>

System::String^ cipher_caesar(wchar_t* a, System::String^ txt, wchar_t stop);

System::String^ cipher_atbash(wchar_t* a, System::String^ txt, wchar_t stop);

System::String^ cipher_rot13(wchar_t* a, System::String^ txt, wchar_t stop);

System::String^ decipher_caesar(wchar_t* a, System::String^ txt, wchar_t stop);

System::String^ decipher_rot13(wchar_t* a, System::String^ txt, wchar_t stop);