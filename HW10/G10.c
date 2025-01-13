/*
 * G10
 * В файле input.txt дана строка слов, разделенных пробелами. Найти самое 
 * длинное слово и вывести его в файл output.txt. Случай, когда самых длинных 
 * слов может быть несколько, не обрабатывать.
 */

#include <stdio.h>
#include <string.h>

int main()
{	
	enum {STRING_SIZE = 1001};
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

	char string[STRING_SIZE];
	char out_string[STRING_SIZE];
		
	size_t max = 0;
	while (fscanf(inputFile, "%s", string) == 1)
	{
		size_t len = strlen(string);
		if (len > max)
		{
			strcpy(out_string, string);
			max = len;
		}
	}
	fprintf(outputFile, "%s\n", out_string);
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
