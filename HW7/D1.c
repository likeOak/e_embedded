/*
 * D1
 * Составить рекурсивную функцию, печать всех чисел от 1 до N
 */

#include <stdio.h>

void recursive_print_row(int);

int main()
{
	int n; 
	
	scanf("%d", &n);
	
	recursive_print_row(n);
	
	return 0;
}

void recursive_print_row(int n)
{
	if (n < 1)
		return;
	recursive_print_row(n - 1);
	printf("%d ", n);
}
