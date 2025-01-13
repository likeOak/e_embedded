/*
 * G18
 * В файле input.txt необходимо удалить все лишние пробелы (в начале предложения и сдвоенные пробелы). 
 * Для решения задачи разработать функцию. Результат записать в output.txt.
 */

#include <stdio.h>
#include <string.h>

void remove_spaces(char str[]);

enum {STRING_SIZE = 1001};
int main()
{	
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

	char string[STRING_SIZE];

    fgets(string, sizeof(string), inputFile);    
			
	remove_spaces(string);
	
	fprintf(outputFile, "%s", string);
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}

void remove_spaces(char str[])
{	
	int i = 0;
	int j = 0;

	while (str[i] == ' ')
	{
		i++;
	}

	int space_flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			str[j++] = str[i];
			space_flag = 0;
		}
		else 
		if (!space_flag)
		{
			str[j++] = ' ';
			space_flag = 1;
		}
		i++;
	}

	if (j > 0 && str[j - 1] == ' ')
	{
		j--;
	}

	str[j] = '\0';
}
