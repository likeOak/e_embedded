/*
 * E14
 * Считать массив из 10 элементов и выделить в другой массив все числа, которые встречаются более одного раза. В результирующем массиве эти числа не должны повторяться.
 */

#include <stdio.h>

void arr_read(int *, int);

int arr_select_same(int *, int *, int);

void arr_print(int *, int);

enum {SIZE = 10};

int main()
{
	int a[SIZE];
	int out[SIZE] = {0};
	int count = 0;
	
	arr_read(a, SIZE);		
		
	count = arr_select_same(a, out, SIZE);
	
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

int arr_select_same(int *arr, int *out, int n)
{
    int count = 0;
    int flag[SIZE] = {0};
    
	for (int i = 0; i < n; i++) 
	{
		if (flag[i]) continue;

		int match = 0;
		for (int j = 0; j < n; j++) 
		{
			if (arr[i] == arr[j]) 
			{
				match++;
				flag[j] = 1;
			}
		}

		if (match > 1)
		{
			out[count] = arr[i];
			count++;
		}
	}
	
	return count;
}

