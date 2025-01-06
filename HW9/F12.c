/*
 * F12
 * Составить функцию которая меняет в массиве минимальный и максимальный элемент местами.
 */

#include <stdio.h>
#include <limits.h>

void change_max_min(int size, int a[]);

void arr_read(int *, int);

void arr_print(int *, int);

int main()
{
	enum {SIZE = 5};
	int a[SIZE] = {-1, 200, -500, 0, -1000};
				
	change_max_min(SIZE, a);
	
	arr_print(a, SIZE);
	
	return 0;
}

void arr_read(int *a, int n)
{
	for (int i = 0; i < n; i++)
		scanf("%d", a + i);	
}

void arr_print(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

void change_max_min(int size, int a[])
{
	int min_idx = 0;
	int max_idx = 0;
	
	int min = a[0];
	int max = a[0];
		
	for (int i = 1; i < size; i++)
	{
		if (a[i] > max) 
		{
			max = a[i];
			max_idx = i;
		}
		if (a[i] < min)
		{
			min = a[i];
			min_idx = i;
		}
	}
	
	if (max != min)
	{
		a[max_idx] = a[max_idx] ^ a[min_idx];
		a[min_idx] = a[max_idx] ^ a[min_idx];
		a[max_idx] = a[max_idx] ^ a[min_idx];
	}
}
