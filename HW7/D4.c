/*
 * D4
 * Дано натуральное число N. Выведите все его цифры по одной, в прямом порядке, 
 * разделяя их пробелами или новыми строками. Необходимо реализовать рекурсивную функцию.
 */

#include <stdio.h>

void print_num(int);

int main()
{
	int n; 
	
	scanf("%d", &n);
	
	if (n == 0)
		printf("%d ", n);
	else	
		print_num(n);
	
	return 0;
}

void print_num(int n)
{
	if (n <= 0)
		return;
		
	print_num(n / 10);
	printf("%d ", n % 10);
}
