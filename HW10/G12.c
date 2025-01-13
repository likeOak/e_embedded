/*
 * G12
 * В файле input.txt дано предложение требуется разобрать его на отдельные слова. 
 * Напечатать каждое слово на отдельной строке в файл output.txt.
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
	
	while (fscanf(inputFile, "%s", string) == 1)
	{		
		fprintf(outputFile, "%s\n", string);
	}
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
