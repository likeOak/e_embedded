/*
 * F3
 * Вывести в порядке возрастания цифры, входящие в десятичную запись натурального числа N, не более 1000 цифр. Цифра пробел сколько раз данная цифра встречается в числе.
 */

#include <stdio.h>
#include <string.h>

void count_digits(char s[]);

int main()
{
	enum {SIZE_STR = 1001};	
	
	char s[SIZE_STR];
	
	scanf("%s", s);
	
	count_digits(s);
	
	return 0;
}

void count_digits(char s[])
{	
	enum {SIZE = 10};
	int digits[SIZE] = {0};
	
	int size = strlen(s);
	for (int i = 0; i < size; i++)
	{
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

