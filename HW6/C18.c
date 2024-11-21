/*
 * C18
 * Составить логическую функцию, которая определяет, что текущий символ это цифра. 
 * Написать программу считающую количество цифр в тексте.  
 */

#include <stdio.h>

int is_digit(char);

int main()
{
	char c;
	int sum = 0;
	
	while(scanf("%c", &c) == 1 && c != '.')
	{
		sum += is_digit(c);
	}
	printf("%d", sum);
	
	return 0;
}

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}
