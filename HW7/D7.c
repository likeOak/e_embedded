/*
 * D7
 * Составить рекурсивную функцию, печать всех чисел от N до 1.
 */

#include <stdio.h>

void recursive_print_row_reverse(int);

int main()
{
	int n; 
	
	scanf("%d", &n);
	
	recursive_print_row_reverse(n);
	
	return 0;
}

void recursive_print_row_reverse(int n)
{
	if (n < 1)
		return;		
	printf("%d ", n);
	recursive_print_row_reverse(n - 1);
}
