#pragma once
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <Windows.h>

using namespace std;

struct dat {
	int num;
	char name[15];
	char type;
	float price;
	int mink;
};

struct list
{
	dat nep;
	list* next;
	list* prev;
};

void crt(dat nep, int* k);

void prnt(dat nep, int* k, int type);

void fnd(dat nep, int* k, int type);

void add(dat nep, int* k);

void dlt(dat nep, int* k);

void srt(dat nep, int* k);

void wrt(dat nep, FILE* f, int* k);

void nwl(dat nep, FILE* f, int* k);


void prnt_once(list* temp);
int compa(const char* s1, const char* s2);
void prnt_up();
void prnt_down();
void dlt_first(dat nep, int* k);
