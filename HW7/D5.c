/*
 * D5
 * Перевести натуральное число в двоичную систему счисления. Необходимо реализовать рекурсивную функцию.
 */

#include <stdio.h>

void recursive_converter_bin(int);

int main()
{
	int n; 
	
	scanf("%d", &n);
	
	if (n == 0)
		printf("%d ", n);
	else	
		recursive_converter_bin(n);
	
	return 0;
}

void recursive_converter_bin(int n)
{
	if (n <= 0)
		return;
		
	recursive_converter_bin(n / 2);
	printf("%d", n % 2);
}
