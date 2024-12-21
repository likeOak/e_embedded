/*
 * E16
 * Дан массив из 10 элементов. Определить, какое число в массиве встречается чаще всего. Гарантируется, что такое число ровно 1.
 */

#include <stdio.h>

void arr_read(int *, int);

int arr_find_same_max(int *, int);

enum {SIZE = 10};

int main()
{
	int a[SIZE];
	int max = 0;
	
	arr_read(a, SIZE);		
		
	max = arr_find_same_max(a, SIZE);
	
	printf("\n%d", max);
	
	return 0;
}

void arr_read(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);	
}

int arr_find_same_max(int *arr, int n)
{
    int flag[SIZE] = {0};    

	int max_rep_val = 0;
	int max_index = 0;
    for (int i = 0; i < n - 1; i++)
    {
		for (int j = i + 1; j < n ; j++)
		{
			if (arr[i] == arr[j])			
			{
				flag[i]++;
				if (max_rep_val < flag[i])
				{
					max_rep_val = flag[i];
					max_index = i;
				}
			}
		}
	}
	
	return arr[max_index];
}

