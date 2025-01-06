/*
 * F4
 * Вывести в порядке возрастания цифры, входящие в строку. Цифра - количество.
 */

#include <stdio.h>
#include <string.h>

void print_digit(char s[]);

int main()
{
	enum {SIZE_STR = 1001};	
	
	char s[SIZE_STR];
	
	scanf("%s", s);
	
	print_digit(s);
	
	return 0;
}

void print_digit(char s[])
{	
	enum {SIZE = 10};
	int digits[SIZE] = {0};
	
	int size = strlen(s);
	for (int i = 0; i < size; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			digits[s[i] - '0']++;
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		if (digits[i] != 0)
		{
			printf("%d %d\n", i, digits[i]);
		}
	}
}

