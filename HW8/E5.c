/*
 * E5
 * Считать массив из 10 элементов и посчитать сумму положительных элементов массива.
 */

#include <stdio.h>

void arr_read(int *, int);

int arr_positive_sum(int *, int);

int main()
{
	enum {SIZE = 10};
	int a[SIZE]; 
	
	arr_read(a, SIZE);		
		
	int sum = arr_positive_sum(a, SIZE);
	printf("%d", sum);
	
	return 0;
}

void arr_read(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);	
}

int arr_positive_sum(int *arr, int n)
{
	int sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		if (0 < arr[i])
		{
			sum += arr[i];
		}
	}
			
	return sum;
}
