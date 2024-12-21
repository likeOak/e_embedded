/*
 * E2
 * Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.
 */

#include <stdio.h>

void arr_read(int *, int);
int arr_min(int *, int);

int main()
{
	enum {SIZE = 5};
	int a[SIZE]; 
	
	arr_read(a, SIZE);		
		
	printf("%d", arr_min(a, SIZE));
	
	return 0;
}

void arr_read(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);	
}

int arr_min(int *arr, int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
		if (min > arr[i])
			min = arr[i];
	return min;
}

