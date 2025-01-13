/*
 * G6
 * В файле input.txt символьная строка не более 1000 символов. 
 * Необходимо проверить, является ли она палиндромом (палиндром читается 
 * одинаково в обоих направлениях). Реализовать логическую функцию 
 * is_palindrom(str) и записать ответ в файл output.txt.
 */

#include <stdio.h>
#include <string.h>

int is_palindrom(char str[]);

int main()
{	
	enum {STRING_SIZE = 1001};
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

	char input[STRING_SIZE];
	
    fgets(input, sizeof(input), inputFile);    
	
	if (is_palindrom(input))
	{
		fprintf(outputFile, "NO");
	}
	else
	{
		fprintf(outputFile, "YES");
	}
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}

int is_palindrom(char str[])
{	
    size_t len = strlen(str);
	while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r'))
	{
		str[--len] = '\0';
	}    
	
	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - 1 - i])
		{
			return 1;
		}
	}
	return 0;
}
