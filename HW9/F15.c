/*
 * F15
 * Составить функцию которая определяет в массиве, состоящем из положительных и отрицательных чисел, сколько элементов превосходят по модулю максимальный элемент. 
 */

#include <stdio.h>
#include <math.h>

int count_bigger_abs(int n, int a[]);

int main()
{
	enum {SIZE = 10};
	int a[SIZE] = {1, -20, 3, 4, -50, 6, 7, 8, 9, 10}; // 2
	
	printf("%d", count_bigger_abs(SIZE, a));
	
	return 0;
}

int count_bigger_abs(int n, int a[])
{	
	int max = a[0];
	
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
	}
	
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (abs(a[i]) > max)
			count++;
	}
	
	return count;
}
