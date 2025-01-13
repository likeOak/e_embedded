/*
 * G3
 * В файле input.txt дана строка не более 1000 символов. Показать номера 
 * символов, совпадающих с последним символом строки. Результат записать в файл output.txt
 */

#include <stdio.h>
#include <string.h>

int main()
{	
	enum {STRING_SIZE = 1001};
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

	char input[STRING_SIZE];
	
    fgets(input, sizeof(input), inputFile);
    
    size_t len = strlen(input);
	while (len > 0 && (input[len - 1] == '\n' || input[len - 1] == '\r'))
	{
		input[--len] = '\0';
	}
		
	for (int i = 0; i < len - 1; i ++)
	{
		if (input[i] == input[len - 1])
			fprintf(outputFile, "%d ", i);
	}
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
