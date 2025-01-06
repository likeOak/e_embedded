/*
 * F13
 * Составить функцию которая возвращает сумму элементов в заданном отрезке [from, to] для массива. 
 */

#include <stdio.h>

int count_between(int from, int to, int size, int a[]);

int main()
{
	enum {SIZE = 10};
	int a[SIZE] = {77, 81, 2, 88, 57, 64, 49, 33, 28, 58};
	
	printf("%d", count_between(2, 88, SIZE, a));
	
	return 0;
}

int count_between(int from, int to, int size, int a[])
{
	int count = 0;
	
	for (int i = 0; i < size; i++)
	{
		if (a[i] >= from && a[i] <= to)
			count++;
	}
	
	return count;
}
