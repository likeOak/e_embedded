/*
 * F7
 * Написать функцию, которая сжимает серии массива, состоящего из единиц и нулей по следующему принципу:
 * например, массив [0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1] преобразуется в [4,7,2,4]
 */

#include <stdio.h>

int compression(int a[], int b[], int N);

void arr_read(int *, int);

void arr_print(int *, int);

int main()
{
	enum {SIZE = 9};
	int a[SIZE] = {1, 1, 1, 1, 0, 1, 0, 1, 1};
	int b[SIZE];
	
	int b_size = compression(a, b, SIZE);
		
	arr_print(b, b_size);
	
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

int compression(int a[], int b[], int N)
{
	if (N <= 0)
		return 0;
	
	int current_length = 1;
	int count = 0;
	if (a[0] == 1)
	{
		b[0] = 0;
		count++;
	}
	
	for (int i = 1; i < N; i++)
	{
		if (a[i] != a[i - 1])
		{
			b[count] = current_length;
			count++;
			current_length = 1;
		} 
		else
		{
			current_length++;
		} 
	}
	b[count] = current_length;
	count++;
		
	return count;
}
