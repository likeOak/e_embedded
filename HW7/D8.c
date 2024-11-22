/*
 * D8
 * Составить рекурсивную функцию, Выведите все числа от A до B включительно, 
 * в порядке возрастания, если A < B, или в порядке убывания в противном случае.
 */

#include <stdio.h>

void recursive_print_range(int, int);

int main()
{
	int a, b; 
	
	scanf("%d%d", &a, &b);
	
	recursive_print_range(a, b);
	
	return 0;
}

void recursive_print_range(int a, int b)
{	
	printf("%d ", a);
	if (a == b)
		return;	
		
	if (a < b)
		recursive_print_range(a + 1, b);
		
	if (a > b)
		recursive_print_range(a - 1, b);
}
