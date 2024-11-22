/*
 * D13
 * Составить рекурсивную функцию, печать всех простых множителей числа.
 */

#include <stdio.h>

void print_prime_factors(int, int);

int main()
{
	int n;
	
	scanf("%d", &n);
		
	print_prime_factors(n, 2);
	
	return 0;
}

void print_prime_factors(int n, int divider)
{
	if (n == 1)
		return;
	if (n % divider == 0)
	{
		printf("%d ", divider);
		print_prime_factors(n / divider, divider);
	} else
	{
		print_prime_factors(n, divider + 1);
	}
}
