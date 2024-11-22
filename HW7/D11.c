/*
 * D11
 * Дано натуральное число N. Посчитать количество «1» в двоичной записи числа. Составить рекурсивную функцию.
 */

#include <stdio.h>

int recursive_bin_sum(int);

int main()
{
	int n; 
	
	scanf("%d", &n);
	
	if (n == 0)
		printf("%d ", n);
	else	
		printf("%d ", recursive_bin_sum(n));
	
	return 0;
}

int recursive_bin_sum(int n)
{
	if (n == 0)
		return 0;
		
	return (n % 2) + recursive_bin_sum(n / 2);
}
