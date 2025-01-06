/*
 * F6
 * определяет, верно ли, что среди элементов массива есть два одинаковых. 
 * Если ответ «да», функция возвращает 1; если ответ «нет», то 0. 
 */

#include <stdio.h>

int is_two_same(int size, int a[]);

void arr_read(int *, int);

void arr_print(int *, int);

int main()
{
	enum {SIZE = 5};
	int a[SIZE];
	
	arr_read(a, SIZE);		
		
	printf("%d", is_two_same(SIZE, a));
	
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

int is_two_same(int size, int a[])
{    
    for (int i = 0; i < size; i++) 
	{
		for (int j = i + 1; j < size; j++)
		{
			if (a[i] == a[j])
			{
				return 1;
			}
		}
    }
    
	return 0;
}
