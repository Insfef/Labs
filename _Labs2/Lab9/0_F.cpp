#include "0_hdr.h"

list* head = NULL;
list* tail = NULL;

void crt(dat nep, int* k)
{
	for (int i = 0; i < *k; i++)
		dlt_first(nep, k);
	*k = 0;
	cout << "(������� ������ ����� ������)" << endl;
	for (int n = 0; n < 20; n++, *k = *k + 1) {
		list* temp = new list;

		temp->nep.num = n + 1;
		printf("%d. �������: ��������(14 �������� ����.), ��� (1 ������), ���� �� ��., ���. ���-�� � ������ >",
			temp->nep.num);
		scanf_s("%s", temp->nep.name, sizeof(temp->nep.name));
		if (!compa(temp->nep.name, "***")) break;
		cin >> temp->nep.type;
		scanf_s("%f", &temp->nep.price);
		scanf_s("%d", &temp->nep.mink);

		if (head == NULL)
			head = temp;
		else
			tail->next = temp;
		tail = temp;
		temp->next = NULL;
	}
}

void prnt(dat nep, int* k)
{
	if (*k == 0) {
		cout << "\t*������� ����� ������� ������*\n\n";
		return;
	}
	*k = 0;
	list* temp;
	temp = head;
	prnt_up();
	while (temp != NULL)
	{
		printf("| %-2d| %-19s | %-10c | %-18.2f | %-30d |\n",
			temp->nep.num, temp->nep.name, temp->nep.type, temp->nep.price, temp->nep.mink);
		temp = temp->next;
		*k = *k + 1;
	}
	prnt_down();
}

void fnd(dat nep, int* k)
{
	if (*k == 0) {
		cout << "\t*������� ����� ������� ������*\n\n";
		return;
	}
	list* temp;
	temp = head;
	int ans = 0;
	while (ans < 1 || ans > 5)
	{
		cout << " 1. �����\n 2. ������������\n 3. ���\n 4. ����\n 5. ���. ���-��\n\n";
		cout << "\t�������� ��������, �� �������� ������ ����������� ����� >> ";
		cin >> ans;
		system("CLS");
		if (ans < 1 || ans > 5)
			cout << "\t*������*\n�� ������ ������ ����� �� ��������� �����:\n\n";
	}
	switch (ans)
	{
	case 1:
		int n;
		cout << " ������� ����� >> ";
		cin >> n;
		for (int i = 0; i < *k; i++)
		{
			if (temp->nep.num == n)
			{
				prnt_once(temp);
				break;
			}
			else
				temp = temp->next;
		}
		break;
	case 2:
		char name[15];
		cout << " ������� ������������ >> ";
		cin >> name;
		prnt_up();
		for (int i = 0; i < *k; i++)
		{
			if (!compa(temp->nep.name, name))
				printf("| %-2d| %-19s | %-10c | %-18.2f | %-30d |\n",
					temp->nep.num, temp->nep.name, temp->nep.type, temp->nep.price, temp->nep.mink);
			temp = temp->next;
		}
		prnt_down();
		break;

	case 3:
		char type;
		cout << " ������� ��� >> ";
		cin >> type;
		prnt_up();
		for (int i = 0; i < *k; i++)
		{
			if (temp->nep.type == type)
				printf("| %-2d| %-19s | %-10c | %-18.2f | %-30d |\n",
					temp->nep.num, temp->nep.name, temp->nep.type, temp->nep.price, temp->nep.mink);
			temp = temp->next;
		}
		prnt_down();
		break;
	case 4:
		int price;
		cout << " ������� ���� >> ";
		cin >> price;
		prnt_up();
		for (int i = 0; i < *k; i++)
		{
			if (temp->nep.price == price)
				printf("| %-2d| %-19s | %-10c | %-18.2f | %-30d |\n",
					temp->nep.num, temp->nep.name, temp->nep.type, temp->nep.price, temp->nep.mink);
			temp = temp->next;
		}
		prnt_down();
		break;
	case 5:
		int mink;
		cout << " ������� ���. ���-��. >> ";
		cin >> mink;
		prnt_up();
		for (int i = 0; i < *k; i++)
		{
			if (temp->nep.mink == mink)
				printf("| %-2d| %-19s | %-10c | %-18.2f | %-30d |\n",
					temp->nep.num, temp->nep.name, temp->nep.type, temp->nep.price, temp->nep.mink);
			temp = temp->next;
		}
		prnt_down();
		break;
	}
}

void add(dat nep, int* k)
{
	if (*k == 0) {
		cout << "\t*������� ����� ������� ������*\n\n";
		return;
	}
	int n;
	cout << " ������� ����� >> ";
	cin >> n;
	*k = *k + 1;
	if (*k < n || n < 1)
	{
		cout << "\t*��������� ���� ����� �����������*\n\n";
		return;
	}
	n--;
	list* temp = new list;
	if (n == 0)
	{
		temp->next = head;
		head = temp;
	}
	else
	{
		list* temp_n = head;
		for (int i = 0; i < n - 1; i++)
			temp_n = temp_n->next;
		temp->next = temp_n->next;
		temp_n->next = temp;
	}
	temp->nep.num = n + 1;
	printf("%d. �������: ��������(14 �������� ����.), ��� (1 ������), ���� �� ��., ���. ���-�� � ������ >", temp->nep.num);
	scanf_s("%s", temp->nep.name, sizeof(temp->nep.name));
	cin >> temp->nep.type;
	scanf_s("%f", &temp->nep.price);
	scanf_s("%d", &temp->nep.mink);
	while (temp != NULL)
	{
		temp->nep.num = ++n;
		temp = temp->next;
	}
}

void dlt(dat nep, int* k)
{
	if (*k == 0) {
		cout << "\t*������� ����� ������� ������*\n\n";
		return;
	}
	list* temp_pos = head;
	cout << " ������� ����� >> ";
	int n;
	cin >> n;
	if (n > *k)
	{
		cout << "\t*��������� ���� ����� �����������*\n\n";
		return;
	}
	*k = *k - 1;
	n--;
	if (n == 0) {
		head = head->next;
		delete temp_pos;
	}
	else {
		for (int i = 0; i < n - 1; i++)
			temp_pos = temp_pos->next;
		list* temp = temp_pos->next;
		temp_pos->next = temp->next;
		delete temp;
	}
	list* temp = new list;
	temp = head;
	int i = 0;
	while (temp != NULL)
	{
		i++;
		if (i > n)
			temp->nep.num = i;
		temp = temp->next;
	}
}

void srt(dat nep, int* k)
{
	if (*k == 0) {
		cout << "\t*������� ����� ������� ������*\n\n";
		return;
	}
	list* temp = head;
	list* temp2 = temp->next;
	list* temp3 = new list;
	for (int i = 0; i < *k - 1; i++)
	{
		temp = head;
		temp2 = temp->next;
		for (int j = 0; j < *k - 1; j++)
		{
			if (compa(temp->nep.name, temp2->nep.name) > 0)
			{
				temp3->nep = temp->nep;
				temp->nep = temp2->nep;
				temp2->nep = temp3->nep;
			}
			temp = temp->next;
			temp2 = temp->next;
		}
	}
	list* num = new list;
	num = head;
	int i = 0;
	while (num != NULL)
	{
		i++;
		num->nep.num = i;
		num = num->next;
	}
}

void wrt(dat nep, FILE* f, int* k)
{
	list* temp = head;
	for (int i = 0; i < *k; i++)
	{
		fprintf(f, "%d %s %c %f %d\n", temp->nep.num, temp->nep.name, temp->nep.type, temp->nep.price, temp->nep.mink);
		temp = temp->next;
	}
	fprintf(f, "***\n");
}

void nwl(dat nep, FILE* f, int* k)
{
	for (int i = 0; i < *k; i++)
		dlt_first(nep, k);
	*k = 0;
	for (int n = 0; n < 20; n++, *k = *k + 1) {
		list* temp = new list;
		fscanf_s(f, "%d", &temp->nep.num);
		fscanf_s(f, "%s", temp->nep.name, sizeof(temp->nep.name));
		if (!compa(temp->nep.name, "***")) break;
		fseek(f, 1, SEEK_CUR);
		fscanf_s(f, "%c", &temp->nep.type, sizeof(temp->nep.type));
		fscanf_s(f, "%f", &temp->nep.price);
		fscanf_s(f, "%d", &temp->nep.mink);
		if (head == NULL)
			head = temp;
		else
			tail->next = temp;
		tail = temp;
		temp->next = NULL;
	}
}


void dlt_first(dat nep, int* k)
{
	list* temp_pos = head;
	head = head->next;
	delete temp_pos;
}