/*
 * G11
 * В файле input.txt дано предложение. Необходимо определить, сколько 
 * слов заканчиваются на букву 'а'. Ответ записать в файл output.txt.
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
	
	int count = 0;
	while (fscanf(inputFile, "%s", string) == 1)
	{
		size_t len = strlen(string);
		if (string[len - 1] == 'a')
		{
			count++;
		}
	}
	fprintf(outputFile, "%d\n", count);
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
