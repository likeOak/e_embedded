/*
 * G1
 * В файле input.txt дана строка. Вывести ее в файл output.txt три раза 
 * через запятую и показать количество символов в ней
 */

#include <stdio.h>
#include <string.h>

int main()
{
	enum {STRING_SIZE = 101};
    FILE *inputFile, *outputFile;
    char input[STRING_SIZE];

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    if (fgets(input, sizeof(input), inputFile) == NULL)
    {
        printf("error");
        fclose(inputFile);
        fclose(outputFile);
        return 1;
    }
    
    size_t len = strlen(input);
	while (len > 0 && (input[len - 1] == '\n' || input[len - 1] == '\r'))
	{
		input[--len] = '\0';
	}
		
    fprintf(outputFile, "%s, %s, %s %zu\n", input, input, input, len);

    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
