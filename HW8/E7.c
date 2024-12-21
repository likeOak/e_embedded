/*
 * E7
 * Считать массив из 10 элементов и выполнить инверсию отдельно для 1-ой 
 * и 2-ой половин массива. Необходимо изменить считанный массив и напечатать его одним циклом.
 */

#include <stdio.h>

void arr_read(int *, int);

void arr_inverse(int *, int);

void arr_print(int *, int);

int main()
{
	enum {SIZE = 10};
	int a[SIZE]; 
	
	arr_read(a, SIZE);		
		
	arr_inverse(a, SIZE);
	
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

void arr_inverse(int *arr, int n)
{
	for (int i = 0; i < n / 4; i++)
	{
		m_swap(&arr[i], &arr[(n - 1) / 2 - i]);
		
		m_swap(&arr[n / 2 + i], &arr[(n - 1) - i]);
	}
	
}

void arr_print(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}
