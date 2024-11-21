/*
 * C9
 * Составить функцию вычисления N!. Использовать ее при вычислении факториала
 */

#include <stdio.h>

unsigned long long int factorial(int);

int main()
{
	int n;
	
	scanf("%d", &n);
	
	printf("%llu", factorial(n));	
	
	return 0;
}

unsigned long long int factorial(int n)
{
	unsigned long long int result = 1;
	
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	
	return result;
}
