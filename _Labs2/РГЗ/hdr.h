#pragma once
#include <string.h>
#include <cstdio>
#include <stdio.h>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <Windows.h>

void cipher_caesar(wchar_t* a);

void cipher_atbosh(wchar_t* a);

void cipher_rot13(wchar_t* a);

void decipher_caesar(wchar_t* a);

void decipher_rot13(wchar_t* a);