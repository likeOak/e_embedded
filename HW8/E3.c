/*
 * E3
 * Считать массив из 10 элементов и найти в нем максимальный и минимальный элементы и их номера.
 */

#include <stdio.h>

void arr_read(int *, int);
int arr_min(int *, int);
int arr_min_pos(int *, int, int);
int arr_max(int *, int);
int arr_max_pos(int *, int, int);

int main()
{
	enum {SIZE = 10};
	int a[SIZE]; 
	
	arr_read(a, SIZE);		
		
	int min = arr_min(a, SIZE);
	int max = arr_max(a, SIZE);
	printf("%d %d %d %d", arr_max_pos(a, SIZE, max), max, arr_min_pos(a, SIZE, min), min);
	
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

int arr_min_pos(int *arr, int n, int min)
{
	int pos_min = 0;
	for (int i = 0; i < n; i++)
		if (min == arr[i])
		{			
			pos_min = i;
			break;
		}
			
	return pos_min + 1;
}

int arr_max(int *arr, int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}

int arr_max_pos(int *arr, int n, int max)
{
	int pos_max = 0;
	for (int i = 0; i < n; i++)
		if (max == arr[i])
		{			
			pos_max = i;
			break;
		}
			
	return pos_max + 1;
}

