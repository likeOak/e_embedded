/*
 * F14
 * Составить функцию которая возвращает сумму элементов в заданном отрезке [from, to] для массива. 
 */

#include <stdio.h>

int sum_between_ab(int from, int to, int size, int a[]);

int main()
{
	enum {SIZE = 10};
	int a[SIZE] = {77, 81, 2, 88, 57, 64, 49, 33, 28, 58};
	
	printf("%d", sum_between_ab(28, 33, SIZE, a));
	
	return 0;
}

int sum_between_ab(int from, int to, int size, int a[])
{
	if (from > to)
	{
		from = from ^ to;
		to = from ^ to;
		from = from ^ to;
	}
	
	int sum = 0;	
	
	for (int i = 0; i < size; i++)
	{
		if (a[i] >= from && a[i] <= to)
			sum += a[i];
	}
	
	return sum;
}
