#include "0_hdr.h"

list* head = NULL;
list* tail = NULL;

void crt(dat nep, int* k)
{
	for (int i = 0; i < *k; i++)
		dlt_first(nep, k);
	*k = 0;
	cout << "(Вводите данные через пробел)" << endl;
	for (int n = 0; n < 20; n++, *k = *k + 1) {
		list* temp = new list;

		temp->nep.num = n + 1;
		printf("%d. Введите: Название(14 символов макс.), Тип (1 символ), Цена за шт., Мин. кол-во в партии >",
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
		cout << "\t*Сначала нужно создать список*\n\n";
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
		cout << "\t*Сначала нужно создать список*\n\n";
		return;
	}
	list* temp;
	temp = head;
	int ans = 0;
	while (ans < 1 || ans > 5)
	{
		cout << " 1. Номер\n 2. Наименование\n 3. Тип\n 4. Цена\n 5. Мин. кол-во\n\n";
		cout << "\tВыберите критерий, по которому хотите осуществить поиск >> ";
		cin >> ans;
		system("CLS");
		if (ans < 1 || ans > 5)
			cout << "\t*Ошибка*\nВы должны ввести одино из следуюзих чисел:\n\n";
	}
	switch (ans)
	{
	case 1:
		int n;
		cout << " Введите номер >> ";
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
		cout << " Введите наименование >> ";
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
		cout << " Введите тип >> ";
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
		cout << " Введите цену >> ";
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
		cout << " Введите мин. кол-во. >> ";
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
		cout << "\t*Сначала нужно создать список*\n\n";
		return;
	}
	int n;
	cout << " Введите номер >> ";
	cin >> n;
	*k = *k + 1;
	if (*k < n || n < 1)
	{
		cout << "\t*Выбранный вами номер некорректен*\n\n";
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
	printf("%d. Введите: Название(14 символов макс.), Тип (1 символ), Цена за шт., Мин. кол-во в партии >", temp->nep.num);
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
		cout << "\t*Сначала нужно создать список*\n\n";
		return;
	}
	list* temp_pos = head;
	cout << " Введите номер >> ";
	int n;
	cin >> n;
	if (n > *k)
	{
		cout << "\t*Выбранный вами номер некорректен*\n\n";
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
		cout << "\t*Сначала нужно создать список*\n\n";
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