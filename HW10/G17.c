/*
 * G17
 * В файле input.txt записаны символы. Необходимо разработать функцию, 
 * которая меняет местами пары соседних символов не обращая внимание на 
 * символы пробел. Если количество символов нечетно (пробелы не считаем), 
 * то последний символ не меняем. Результат записать в файл output.txt.
 */

#include <stdio.h>
#include <string.h>

void swap_chars(char str[]);

enum {STRING_SIZE = 1001};
int main()
{	
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

	char string[STRING_SIZE];

    fgets(string, sizeof(string), inputFile);    
			
	swap_chars(string);
	
	fprintf(outputFile, "%s", string);
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}

void swap_chars(char str[])
{	
    size_t len = strlen(str);
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
    int i = 0;
    int j = 0;
    char filtered[STRING_SIZE];
    
    while (str[i] != '\0')
	{
        if (str[i] != ' ')
		{
            filtered[j++] = str[i];
        }
        i++;
    }
    filtered[j] = '\0';
    
    for (i = 0; i < j - 1; i += 2)
	{
        char temp = filtered[i];
        filtered[i] = filtered[i + 1];
        filtered[i + 1] = temp;
    }
	
    i = 0;
    j = 0;
    while (str[i] != '\0')
	{
        if (str[i] != ' ')
		{
            str[i] = filtered[j++];
        }
        i++;
    }
}
