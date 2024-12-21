/*
 * E8
 * Считать массив из 12 элементов и выполнить инверсию для каждой трети массива.
 */

#include <stdio.h>

void arr_read(int *, int);

void arr_inverse_3(int *, int);

void arr_print(int *, int);

int main()
{
	enum {SIZE = 12};
	int a[SIZE]; 
	
	arr_read(a, SIZE);		
		
	arr_inverse_3(a, SIZE);
	
	arr_print(a, SIZE);
	
	return 0;
}

void arr_read(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);	
}

void m_swap(int *a, int*b)
{
	 *a = *a ^ *b;
     *b = *a ^ *b;
     *a = *a ^ *b;        
}

void arr_inverse_3(int *arr, int n)
{
	for (int i = 0; i <= n / 9; i++)
	{
		m_swap(&arr[i], &arr[(n - 1) / 3 - i]);		
		
		m_swap(&arr[1 * n / 3 + i], &arr[(2 * n - 1) / 3 - i]);
		
		m_swap(&arr[2 * n / 3 + i], &arr[(n - 1) - i]);
	}
	
}

void arr_print(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}
