/*
 * E4
 * Считать массив из 10 элементов и найти в нем два максимальных элемента и напечатать их сумму.
 */

#include <stdio.h>

void arr_read(int *, int);

int arr_max_sum(int *, int);

int main()
{
	enum {SIZE = 10};
	int a[SIZE]; 
	
	arr_read(a, SIZE);		
		
	int sum = arr_max_sum(a, SIZE);
	printf("\n%d", sum);
	
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

int arr_max_sum(int *arr, int n)
{
	int max_prev = arr[0];
	int max_cur = arr[1];
	
	if (max_cur < max_prev)
		m_swap(&max_cur, &max_prev);
	
	for (int i = 2; i < n; i++)
	{
		if (max_cur < arr[i])
		{
			max_prev = max_cur;
			max_cur = arr[i];
		} else
		if (max_prev < arr[i])
			max_prev = arr[i];
	}
			
	return max_prev + max_cur;
}
