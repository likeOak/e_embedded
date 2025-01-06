/*
 * F9
 * Составить только функцию которая в массиве находит максимальный из отрицательных элементов 
 * и меняет его местами с последним элементом массива. Гарантируется, что в массиве только один 
 * такой элемент или же такой элемент отсутствует. Если отрицательных элементов нет - массив не менять.
 */

#include <stdio.h>
#include <limits.h>

void swap_negmax_last(int size, int a[]);

void arr_read(int *, int);

void arr_print(int *, int);

int main()
{
	enum {SIZE = 10};
	int a[SIZE] = {1, -2, -3, -4, 5, 6, 7, 8, 9, 10};
			
	swap_negmax_last(SIZE, a);
	
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

void swap_negmax_last(int size, int a[])
{
	int max = INT_MIN;
	int max_idx = -1;
	for (int i = 0; i < size - 1; i++)
	{
		if (a[i] < 0)
		{
			if (a[i] > max)
			{
				max = a[i];
				max_idx = i;
			}
		}
	}
	
	if (max_idx != -1)
	{
		a[max_idx] = a[max_idx] ^ a[size - 1];
		a[size - 1] = a[max_idx] ^ a[size - 1];
		a[max_idx] = a[max_idx] ^ a[size - 1];
	}
}
