/*
 * D14
 * Дана последовательность целых чисел через пробел, завершающаяся числом 0. 
 * Выведите все нечетные числа из этой последовательности, сохраняя их порядок. Составить рекурсивную функцию.
 */

#include <stdio.h>

void print_odd_recursion();

int main()
{
	print_odd_recursion();
	
	return 0;
}

void print_odd_recursion()
{
	int n;	
	scanf("%d", &n);
	
	if (n == 0)
		return;
		
	if (n % 2 != 0)
		printf("%d ", n);
		
	print_odd_recursion();		
}
