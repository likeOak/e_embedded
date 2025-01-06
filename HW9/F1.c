/*
 * F1
 * Написать только одну функцию, которая сортирует массив по возрастанию.
 */

#include <stdio.h>

void sort_array(int size, int a[]);

void arr_read(int *, int);

void arr_print(int *, int);

int main()
{
	enum {SIZE = 20};
	int a[SIZE];
	
	arr_read(a, SIZE);		
		
	sort_array(SIZE, a);
	
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

void sort_array(int size, int a[])
{
    for (int i = 0; i < size - 1; i++) 
	{
        for (int j = 0; j < size - i - 1; j++) 
		{
            if (a[j] > a[j + 1]) 
			{     
				a[j] = a[j] ^ a[j + 1];
				a[j + 1] = a[j] ^ a[j + 1];
				a[j] = a[j] ^ a[j + 1];  
            }
        }
    }
}
