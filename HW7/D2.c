/*
 * D2
 * Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N
 */

#include <stdio.h>

int recursive_sum(int);

int main()
{
	int n; 
	
	scanf("%d", &n);
	
	printf("%d", recursive_sum(n));
	
	return 0;
}

int recursive_sum(int n)
{
	if (n == 0)
		return 0;
	return n + recursive_sum(n - 1);
}
