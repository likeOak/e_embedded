/*
 * G16
 * В файле input.txt дано предложение. Необходимо заменить все имена «Ling» на «Cao» и результат записать в файл output.txt.
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

    fgets(string, sizeof(string), inputFile);    
		
    char *ptr = string;
    while ((ptr = strstr(ptr, "Ling")) != NULL)
	{
        memmove(ptr + 3, ptr + 4, strlen(ptr + 4) + 1);
        memcpy(ptr, "Cao", 3);
        ptr += 3;
    }	
	
	fprintf(outputFile, "%s", string);
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
