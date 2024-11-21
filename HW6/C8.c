/*
 * C8
 * Составить функцию, которая переводит латинскую строчную букву в заглавную.  
 */

#include <stdio.h>

char char_capitalizer(char);

int main()
{
	char c; 
	
	while(scanf("%c", &c) == 1 && c != '.')
	{
		printf("%c", char_capitalizer(c));
	}
	
	return 0;
}

char char_capitalizer(char c)
{
	if (c >= 'a' && c <= 'z')
		return c += 'A' - 'a';
	return c;
}
