/*
 * E13
 * Считать массив из 10 элементов и отобрать в другой массив все числа, у которых вторая с конца цифра (число десятков) – ноль.
 */

#include <stdio.h>

void arr_read(int *, int);

int arr_select(int *, int *, int);

void arr_print(int *, int);

int main()
{
	enum {SIZE = 10};
	int a[SIZE];
	int out[SIZE];
	int count = 0;
	
	arr_read(a, SIZE);		
		
	count = arr_select(a, out, SIZE);
	
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

int arr_select(int *arr, int *out, int n)
{
    int count = 0;
    
    for (int i = 0; i < n; i++)
    {
		if ((arr[i]/10)%10 == 0)
		{
			out[count] = arr[i];
			count++;
		}
	}
	return count;
}

