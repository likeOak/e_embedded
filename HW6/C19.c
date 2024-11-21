/*
 * C19
 * Составить функцию, которая преобразует текущий символ цифры в число. 
 * Написать программу считающую сумму цифр в тексте.  
 */

#include <stdio.h>

int digit_to_num(char);

int main()
{
	char c;
	int sum = 0;
	
	while(scanf("%c", &c) == 1 && c != '.')
	{
		sum += digit_to_num(c);
	}
	printf("%d", sum);
	
	return 0;
}

int digit_to_num(char c)
{
	if (c >= '0' && c <= '9')
		return c - '0';
	return 0;
}
