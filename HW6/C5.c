/*
 * C5
 * Составить функцию, которая определяет сумму всех чисел от 1 до N 
 * и привести пример ее использования.
 */

#include <stdio.h>

int calc_sum(int);

int main()
{
	int N; 
	
	scanf("%d", &N);
	
	printf("%d", calc_sum(N));
	
	return 0;
}

int calc_sum(int n)
{
	int result = 0;
	for (int i = 1; i <= n; i++)
		result += i;
	return result;
}
