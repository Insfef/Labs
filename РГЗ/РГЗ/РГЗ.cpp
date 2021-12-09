
#include "windows.h"
#include <iostream>
#include <chrono>
//#include "windows.h"
using namespace std;

#define M 1000	// Количество циклов
#define N 45
#define I 100

void print_arr(int arr[])
{
	for (int i = 0; i < N; i++)
	{
		printf("%3d", arr[i]);
	}
	printf("\n\n");
}
int fill_arr_nep(int arr[])
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = i;
	}
	return arr[N];
}
int fill_arr_nepr(int arr[])
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = I - i - 1;
	}
	return arr[N];
}
int copy_arr(int s_arr[], int arr[])
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = s_arr[i];
	}
	return arr[N];
}
int fill_arr(int arr[])
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % I;
	}
	return arr[N];
}
int swap(int arr[], int a, int b)
{

	arr[a] = arr[b] + arr[a];
	arr[b] = arr[a] - arr[b];
	arr[a] = arr[a] - arr[b];
	return arr[N];
}
int shuttle_sort(int arr[])
{
	for (int i = 1; i < N; i++) 
	{
		if (arr[i] < arr[i - 1]) 
		{
			/*swap(arr, i, i - 1);*/
			arr[i] = arr[i - 1] + arr[i];
			arr[i - 1] = arr[i] - arr[i - 1];
			arr[i] = arr[i] - arr[i - 1];
			for (int j = i - 1; (j - 1) >= 0; j--) 
			{
				if (arr[j] < arr[j - 1]) 
				{
					/*swap(arr, j, j - 1);*/
					arr[j] = arr[j - 1] + arr[j];
					arr[j - 1] = arr[j] - arr[j - 1];
					arr[j] = arr[j] - arr[j - 1];
				}
				else
					break;
			}
		}
	}
	return arr[N];
}
int fill_csort_arr(int arr[])
{
	for (int i = 0; i < I; i++)
	{
		arr[i] = 0;
	}
	return arr[I];
}
int counting_sort(int arr[], int num_arr[])
{
	for (int i = 0; i < N; i++)
		num_arr[arr[i]]++;

	for (int i = 0, j = 0; i < I; i++)
	{
		if (num_arr[i] > 0)
		{
			arr[j] = i;
			num_arr[i]--;
			i--;
			j++;
		}
	}
	return arr[N];
}

double avertime_swap(double arr[], int a, int b)
{
	arr[a] = arr[b] + arr[a];
	arr[b] = arr[a] - arr[b];
	arr[a] = arr[a] - arr[b];
	return arr[N];
}
double avertime_sort(double arr[])
{
	for (int i = 1; i < N; i++)
	{
		if (arr[i] < arr[i - 1])
		{
			avertime_swap(arr, i, i - 1);
			for (int j = i - 1; (j - 1) >= 0; j--)
			{
				if (arr[j] < arr[j - 1])
				{
					avertime_swap(arr, j, j - 1);
				}
				else
					break;
			}
		}
	}
	return arr[N];
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double dur_arr[M];
	long F = 0;
	double aver_dur = 0;
	int s_arr[N];
	int arr[N];
	fill_arr(s_arr);
	printf("\n\n\n");
	printf("Неупоряд. массив");
	print_arr(s_arr);
	for (int i = 0; i < M; i++)
	{
		copy_arr(s_arr, arr);
		auto start = chrono::high_resolution_clock::now();
		/*shuttle_sort(arr);*/
		for (int i = 1; i < N; i++)
		{
			if (arr[i] < arr[i - 1])
			{
				/*swap(arr, i, i - 1);*/
				arr[i] = arr[i - 1] + arr[i];
				arr[i - 1] = arr[i] - arr[i - 1];
				arr[i] = arr[i] - arr[i - 1];
				for (int j = i - 1; (j - 1) >= 0; j--)
				{
					if (arr[j] < arr[j - 1])
					{
						/*swap(arr, j, j - 1);*/
						arr[j] = arr[j - 1] + arr[j];
						arr[j - 1] = arr[j] - arr[j - 1];
						arr[j] = arr[j] - arr[j - 1];
					}
					else
						break;
				}
			}
		}
		auto end = chrono::high_resolution_clock::now();
		chrono::duration<double> duration = end - start;
		dur_arr[i] = duration.count();
	}
	avertime_sort(dur_arr);
	for (int i = (M/5); i < (M-(M/5)); i++)
	{
		aver_dur += dur_arr[i];
	}
	printf("Отсорт. массив");
	print_arr(arr);
	printf("Среднее значение (неупоряд.) = %.8f s\n\n\n\n\n", aver_dur / (M - 2 * (M/5)));
	aver_dur = 0;


	fill_arr_nep(s_arr);
	printf("Упоряд. массив");
	print_arr(s_arr);
	for (int i = 0; i < M; i++)
	{
		copy_arr(s_arr, arr);
		auto start = chrono::high_resolution_clock::now();
		/*shuttle_sort(arr);*/
		for (int i = 1; i < N; i++)
		{
			if (arr[i] < arr[i - 1])
			{
				/*swap(arr, i, i - 1);*/
				arr[i] = arr[i - 1] + arr[i];
				arr[i - 1] = arr[i] - arr[i - 1];
				arr[i] = arr[i] - arr[i - 1];
				for (int j = i - 1; (j - 1) >= 0; j--)
				{
					if (arr[j] < arr[j - 1])
					{
						/*swap(arr, j, j - 1);*/
						arr[j] = arr[j - 1] + arr[j];
						arr[j - 1] = arr[j] - arr[j - 1];
						arr[j] = arr[j] - arr[j - 1];
					}
					else
						break;
				}
			}
		}
		auto end = chrono::high_resolution_clock::now();
		chrono::duration<double> duration = end - start;
		dur_arr[i] = duration.count();
	}
	avertime_sort(dur_arr);
	for (int i = (M / 5); i < (M - (M / 5)); i++)
	{
		aver_dur += dur_arr[i];
	}
	printf("Отсорт. массив");
	print_arr(arr);
	printf("\nСреднее значение (упоряд.) = %.8f s\n\n\n\n\n", aver_dur / (M - 2 * (M / 5)));
	aver_dur = 0;


	printf("Упоряд. обрат. массив");
	fill_arr_nepr(s_arr);
	print_arr(s_arr);
	for (int i = 0; i < M; i++)
	{
		copy_arr(s_arr, arr);
		auto start = chrono::high_resolution_clock::now();
		/*shuttle_sort(arr);*/
		for (int i = 1; i < N; i++)
		{
			if (arr[i] < arr[i - 1])
			{
				/*swap(arr, i, i - 1);*/
				arr[i] = arr[i - 1] + arr[i];
				arr[i - 1] = arr[i] - arr[i - 1];
				arr[i] = arr[i] - arr[i - 1];
				for (int j = i - 1; (j - 1) >= 0; j--)
				{
					if (arr[j] < arr[j - 1])
					{
						/*swap(arr, j, j - 1);*/
						arr[j] = arr[j - 1] + arr[j];
						arr[j - 1] = arr[j] - arr[j - 1];
						arr[j] = arr[j] - arr[j - 1];
					}
					else
						break;
				}
			}
		}
		auto end = chrono::high_resolution_clock::now();
		chrono::duration<double> duration = end - start;
		dur_arr[i] = duration.count();
	}
	avertime_sort(dur_arr);
	for (int i = (M / 5); i < (M - (M / 5)); i++)
	{
		aver_dur += dur_arr[i];
	}
	printf("Отсорт. массив");
	print_arr(arr);
	printf("\nСреднее значение (упоряд. обрат.) = %.8f s\n\n\n\n\n", aver_dur / (M - 2 * (M / 5)));
	printf("\n\n\n");
	aver_dur = 0;



	int s_arrc[N];
	int arrc[N];
	int num_arrc[I];
	fill_csort_arr(num_arrc);
	fill_arr(s_arrc);
	copy_arr(s_arrc, arrc);
	printf("Неупоряд. массив");
	print_arr(s_arrc);
	for (int i = 0; i < M; i++)
	{
		copy_arr(s_arrc, arrc);
		auto start = chrono::high_resolution_clock::now();
		/*counting_sort(arrc, num_arrc);*/
		for (int i = 0; i < N; i++)
			num_arrc[arrc[i]]++;

		for (int i = 0, j = 0; i < I; i++)
		{
			if (num_arrc[i] > 0)
			{
				arrc[j] = i;
				num_arrc[i]--;
				i--;
				j++;
			}
		}
		auto end = chrono::high_resolution_clock::now();
		chrono::duration<double> duration = end - start;
		dur_arr[i] = duration.count();
	}
	printf("Отсорт. массив");
	print_arr(arrc);
	avertime_sort(dur_arr);
	for (int i = (M / 5); i < (M - (M / 5)); i++)
	{
		aver_dur += dur_arr[i];
	}
	printf("Среднее значение (неупоряд.) = %.8f s", aver_dur / (M - 2 * (M / 5)));
	printf("\n\n\n\n\n");
	aver_dur = 0;


	fill_arr_nep(s_arrc);
	printf("Упоряд. массив");
	print_arr(s_arrc);
	for (int i = 0; i < M; i++)
	{
		copy_arr(s_arrc, arrc);
		auto start = chrono::high_resolution_clock::now();
		/*counting_sort(arrc, num_arrc);*/
		for (int i = 0; i < N; i++)
			num_arrc[arrc[i]]++;

		for (int i = 0, j = 0; i < I; i++)
		{
			if (num_arrc[i] > 0)
			{
				arrc[j] = i;
				num_arrc[i]--;
				i--;
				j++;
			}
		}
		auto end = chrono::high_resolution_clock::now();
		chrono::duration<double> duration = end - start;
		dur_arr[i] = duration.count();
	}
	printf("Отсорт. массив");
	print_arr(arrc);
	avertime_sort(dur_arr);
	for (int i = (M / 5); i < (M - (M / 5)); i++)
	{
		aver_dur += dur_arr[i];
	}
	printf("Среднее значение (упоряд.) = %.8f s", aver_dur / (M - 2 * (M / 5)));
	printf("\n\n\n\n\n");
	aver_dur = 0;


	fill_arr_nepr(s_arrc);
	printf("Упоряд. обрат. массив");
	print_arr(s_arrc);
	for (int i = 0; i < M; i++)
	{
		copy_arr(s_arrc, arrc);
		auto start = chrono::high_resolution_clock::now();
		/*counting_sort(arrc, num_arrc);*/
		for (int i = 0; i < N; i++)
			num_arrc[arrc[i]]++;

		for (int i = 0, j = 0; i < I; i++)
		{
			if (num_arrc[i] > 0)
			{
				arrc[j] = i;
				num_arrc[i]--;
				i--;
				j++;
			}
		}
		auto end = chrono::high_resolution_clock::now();
		chrono::duration<double> duration = end - start;
		dur_arr[i] = duration.count();
	}
	avertime_sort(dur_arr);
	for (int i = (M / 5); i < (M - (M / 5)); i++)
	{
		aver_dur += dur_arr[i];
	}
	printf("Отсорт. массив");
	print_arr(arrc);
	printf("\nСреднее значение (упоряд. обрат.) = %.8f s", aver_dur / (M - 2 * (M / 5)));
	printf("\n\n\n");

}
