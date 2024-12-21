/*
 * E17
 * Дан массив из 10 элементов. В массиве найти элементы, которые в нем встречаются только один раз, и вывести их на экран.
 */

#include <stdio.h>

void arr_read(int *, int);

int arr_select_single(int *, int *, int);

void arr_print(int *, int);


int main()
{	
	enum {SIZE = 10};
	int a[SIZE];
	int out[SIZE] = {0};
	int count = 0;
	
	arr_read(a, SIZE);		
		
	count = arr_select_single(a, out, SIZE);
	
	arr_print(out, count);
	
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

int arr_select_single(int *arr, int *out, int n)
{
    int count = 0;
    
	for (int i = 0; i < n; i++) 
	{
		int flag = 0;
		for (int j = 0; j < n; j++) 
		{
			if (i == j)
				continue;
			if (arr[i] == arr[j]) 
			{
				flag = 1;
				break;
			}
		}	

		if (!flag)
		{
			out[count] = arr[i];
			count++;
		}
	}
	
	return count;
}

