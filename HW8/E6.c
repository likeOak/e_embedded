/*
 * E6
 * Считать массив из 12 элементов и посчитать среднее арифметическое элементов массива.
 */

#include <stdio.h>

void arr_read(int *, int);

double arr_mean(int *, int);

int main()
{
	enum {SIZE = 12};
	int a[SIZE]; 
	
	arr_read(a, SIZE);		
		
	double mean = arr_mean(a, SIZE);
	printf("%.2f", mean);
	
	return 0;
}

void arr_read(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);	
}

double arr_mean(int *arr, int n)
{
	int sum = 0;
	
	for (int i = 0; i < n; i++)
		sum += arr[i];		
			
	return (double)sum / n;
}
