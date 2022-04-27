#pragma once
#include <iostream>
#include <time.h>

using namespace std;

void nep_gen(int** nep, int S);

void nep_out(int** nep, int S);

int* nep_risu(int** A, int* A1, int* A2, int* p1, int* p2);

void nep_mami(int** A, int* A1, int* A2, int S);