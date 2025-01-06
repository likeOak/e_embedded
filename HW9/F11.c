/*
 * F11
 * Дан целочисленный массив из 30 элементов. Элементы массива могут принимать 
 * произвольные целые значения помещающиеся в int. Необходимо создать функцию, 
 * которая находит и выводит в порядке возрастания номера двух элементов массива, сумма которых минимальна.
 */

#include <stdio.h>
#include <limits.h>

void findMinSum(int size, int a[]);

void arr_read(int *, int);

void arr_print(int *, int);

int main()
{
	enum {SIZE = 30};
	int a[SIZE];
			
	arr_read(a, SIZE);
	
	findMinSum(SIZE, a);
	
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

void findMinSum(int size, int a[])
{
	int minSum = INT_MAX;
	int min_idx1 = -1;
	int min_idx2 = -1;
	
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			int sum = a[i] + a[j];
			if (sum < minSum)
			{
				minSum = sum;
				min_idx1 = i;
				min_idx2 = j;
			}
		}
    }
	
	if (min_idx1 > min_idx2)
	{
		printf("%d %d", min_idx2, min_idx1);
	} 
	else
		printf("%d %d", min_idx1, min_idx2);
}
