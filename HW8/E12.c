/*
 * E12
 * Считать массив из 10 элементов и отсортировать первую половину по возрастанию, а вторую – по убыванию.
 */

#include <stdio.h>

void arr_read(int *, int);

void arr_sort_asc(int *, int);
void arr_sort_desc(int *, int);

void arr_print(int *, int);

int main()
{
	enum {SIZE = 10};
	int a[SIZE];
	
	arr_read(a, SIZE);		
		
	arr_sort_asc(a, SIZE / 2);
	arr_sort_desc(&a[SIZE / 2], SIZE / 2);
	
	arr_print(a, SIZE);
	
	return 0;
}

void arr_read(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);	
}

void arr_print(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

void m_swap(int *a, int*b)
{
	 *a = *a ^ *b;
     *b = *a ^ *b;
     *a = *a ^ *b;        
}

void arr_sort_asc(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
				m_swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void arr_sort_desc(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - i - 1; j++) 
		{
            if (arr[j] < arr[j + 1]) 
			{
				m_swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

