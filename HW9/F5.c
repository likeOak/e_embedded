/*
 * F5
 * Написать только одну функцию, которая находит максимальный элемент в массиве
 */

#include <stdio.h>

void arr_read(int *, int);
int find_max_array(int size, int a[]);

int main()
{
	enum {SIZE = 5};
	int a[SIZE]; 
	
	arr_read(a, SIZE);		
		
	printf("%d", find_max_array(SIZE, a));
	
	return 0;
}

void arr_read(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);	
}

int find_max_array(int size, int a[])
{
	int max = a[0];
	for (int i = 0; i < size; i++)
		if (max < a[i])
			max = a[i];
	return max;
}

