/*
 * G9
 * В файле input.txt строка из меленьких и больших английских букв, 
 * знаков препинания и пробелов. Требуется удалить из нее повторяющиеся 
 * символы и все пробелы. Результат записать в файл output.txt.
 */

#include <stdio.h>
#include <string.h>

int main()
{	
	enum {STRING_SIZE = 1001};
	enum {ALPHABET_SIZE = 128};
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

	char string[STRING_SIZE];
	char alphabet[ALPHABET_SIZE] = {0};

    fgets(string, sizeof(string), inputFile);    
		
    size_t len = strlen(string);
	for (int i = 0; i < len; i++)
	{
		if (string[i] != ' ' && !alphabet[(unsigned char)string[i]])
		{
			alphabet[(unsigned char)string[i]] = 1;
			fprintf(outputFile, "%c", string[i]);
		}
	}
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
