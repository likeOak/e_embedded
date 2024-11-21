/*
 * C20
 * Проверить строку состоящую из скобок "(" и ")" на корректность.
 */

#include <stdio.h>

#define EXIT_FLAG 10000

int parenthesis_check(char);

int main()
{
	char c;
	int sum = 0;
	
	while(scanf("%c", &c) == 1 && c != '.')
	{
		sum += parenthesis_check(c);
	}
	if (sum == 0)
		printf("YES");
	else
		printf("NO");
	
	return 0;
}

int parenthesis_check(char c)
{
	static int open_factor = 0;
	static int close_factor = 0;
	
	if (close_factor > open_factor)
		return EXIT_FLAG;
	
	if (c == '(')
	{
		open_factor++;
		return 1;
	}
	if (c == ')')
	{
		close_factor++;
		return -1;
	}
	return 0;
}
