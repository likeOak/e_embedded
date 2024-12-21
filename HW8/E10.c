/*
 * E10
 * Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.
 */

#include <stdio.h>

void arr_read(int *, int);

void arr_shift_r(int *, int, int);

void arr_print(int *, int);

int main()
{
	enum {SIZE = 12};
	int a[SIZE];
	int shift_factor = 4;
	
	arr_read(a, SIZE);		
		
	arr_shift_r(a, SIZE, shift_factor);
	
	arr_print(a, SIZE);
	
	return 0;
}

void arr_read(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);	
}

void arr_shift_r(int *arr, int n, int shift_factor)
{
	shift_factor = shift_factor % n;
	
	while (shift_factor--)
	{
		int last_element = arr[n - 1];
		
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];		
		}
		arr[0] = last_element;
	}
}

void arr_print(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}
