/*
 * D10
 * Дано натуральное число n ≥ 1. Проверьте, является ли оно простым. 
 * Программа должна вывести слово YES, если число простое или NO в противном случае. 
 * Необходимо составить рекурсивную функцию и использовать ее.
 */

#include <stdio.h>

int is_prime(int, int);

int main()
{
	int n; 
	
	scanf("%d", &n);
	
	if (n == 1)
		printf("NO");
	else	
	if (is_prime(n, n - 1))
		printf("YES");
	else
		printf("NO");
	
	return 0;
}

int is_prime(int n, int divider)
{
	if (divider == 1)
		return 1;
		
	if (n % divider == 0)
		return 0;
	
	return is_prime(n, divider - 1);
}
