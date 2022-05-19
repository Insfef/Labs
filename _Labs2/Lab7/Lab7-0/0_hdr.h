#pragma once
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <ctime>

using namespace std;

struct lists {
	int num;
	char name[15];
	char type;
	float price;
	int mink;
};

void prnt(lists[], FILE* f, int* k);

void exec(lists nep[], FILE* f, int* k);

void exec_rand(lists[], FILE* f, int* k);

void add_beg(lists[], FILE* f, int* k);

void add_end(lists[], FILE* f, int* k);

void read_n(lists[], FILE* f, int* k, int n);

int compa(const char* s1, const char* s2);