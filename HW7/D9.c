/*
 * D9
 * Дано натуральное число N. Вычислите сумму его цифр. Необходимо составить рекурсивную функцию.
 */

#include <stdio.h>

int sum_digits(int);

int main()
{
	int n; 
	
	scanf("%d", &n);
	
	printf("%d", sum_digits(n));
	
	return 0;
}

int sum_digits(int n)
{
	if (n == 0)
		return 0;
		
	return n % 10 + sum_digits(n / 10);
}
