#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h";
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/* 
	char name1[7] = "�����", name2[8] = "������", name3[12] = "�����������";
	char sc1 = '�', sc2 = 'K', sc3 = 'O';
	float cnt1 = 4.75, cnt2 = 13.90, cnt3 = 411.00;
	float sq1 = 4, sq2 = 10, sq3 = 1;	*/

	char name1[7] = "�����", name2[8] = "������", name3[12] = "�����������";
	char sc1 = '�', sc2 = 'K', sc3 = 'O';
	float cnt1 = 4.75, cnt2 = 13.90, cnt3 = 411.00;
	float sq1 = 4, sq2 = 10, sq3 = 1;

	/* �������� ����������� ������*/
	printf("1. �������: ������������, ���, ����, ����������� ���������� � ������ >");
	scanf("%s %c %f %f", name1, &sc1, &cnt1, &sq1);
	printf("2. �������: ������������, ���, ����, ����������� ���������� � ������ >");
	scanf("%s %c %f %f", name2, &sc2, &cnt2, &sq2);
	printf("3. �������: ������������, ���, ����, ����������� ���������� � ������ >");
	scanf("%s %c %f %f", name3, &sc3, &cnt3, &sq3);

	/* ����� ������� */
	/* ����� ���������� */
	printf("------------------------------------------------------------------------------------------\n");
	printf("|					�����-����					 |\n");
	printf("|----------------------------------------------------------------------------------------|\n");
	printf("| ������������ ������ | ��� ������ | ���� �� 1 �� (���) |����������� ���������� � ������ |\n");
	printf("|---------------------|------------|------------------- |--------------------------------|\n");
	/* ����� ����� ����������� ������ */
	printf("| %19s | %10c | %18f | %-30f |\n", name1, sc1, cnt1, sq1);
	printf("| %19s | %10c | %18f | %-30f |\n", name2, sc2, cnt2, sq2);
	printf("| %19s | %10c | %18f | %-30f |\n", name3, sc3, cnt3, sq3);
	/* ����� ���������� */
	printf("|----------------------------------------------------------------------------------------|\n");
	printf("|                        ����������: � - ����������;                                     |\n");
	printf("|                                    � - ����������;                                     |\n");
	printf("------------------------------------------------------------------------------------------\n");
	return 0;
}