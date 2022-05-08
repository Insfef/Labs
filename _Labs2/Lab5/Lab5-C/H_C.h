#pragma once
#include <iostream>
#include <time.h>

using namespace std;

void nep_gen(int* nep, int S);

void nep_out(int* nep, int S);

void bubble_sort(int* nep, int S);

void shuttle_sort(int* nep, int S);

void sort_nep(int* nep, int S, void (*uni)(int* nep, int S));

void swap(int* nep, int a, int b);