#pragma once
#include <iostream>
#include <time.h>
#define k 2

using namespace std;
#if k == 1

void nep_gen(int* nep, int S);

void nep_out(int* nep, int S);

int* nep_ref(int* nep, int S);

void nep_exec();

#endif

#if k == 2

void nep_gen(int** nep, int S);

void nep_out(int** nep, int S);

int** nep_ref(int** nep, int S);

void nep_exec();

#endif