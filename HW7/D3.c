/*
 * D3
 * Дано целое не отрицательное число N. Выведите все его цифры по одной,
 * в обратном порядке, разделяя их пробелами или новыми строками. Составить рекурсивную функцию.
 */

#include <stdio.h>

void recursive_print_num(int);

int main()
{
	int n; 
	
	scanf("%d", &n);
	
	if (n == 0)
		printf("%d ", n);
	else	
		recursive_print_num(n);
	
	return 0;
}

void recursive_print_num(int n)
{
	if (n <= 0)
		return;
	printf("%d ", n % 10);
	recursive_print_num(n / 10);
}
