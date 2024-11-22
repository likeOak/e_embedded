/*
 * D6
 * Дана строка заканчивающаяся символом точка '.' 
 * Напечатать строку наоборот. Реализуйте рекурсивную функцию, которая считывает и печатает строку наоборот.
 */

#include <stdio.h>

void recursive_print_reverse();

int main()
{
	recursive_print_reverse();
	
	return 0;
}

void recursive_print_reverse()
{
	char c;
	scanf("%c", &c);
	
	if (c == '.')
		return;
		
	recursive_print_reverse();
	printf("%c", c);
}
