/*
 * D19
 * Дана строка из английских символов, пробелов и знаков препинания. 
 * В конце строки символ точка. Необходимо реализовать рекурсивную функцию, 
 * которая считывает данную строку со стандартного потока ввода и возвращает целое число - количество символов 'a' в данной строке.
 */

#include <stdio.h>

int acounter();

int main()
{
	printf("%d", acounter());
	
	return 0;
}

int acounter()
{
	char c;
	scanf("%c", &c);
	
	if (c == '.')
		return 0;
		
	return (c == 'a') + acounter();
}
