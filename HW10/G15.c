/*
 * G15
 * В файле input.txt дано предложение. Необходимо заменить 
 * все имена «Cao» на «Ling» и записать результат в файл output.txt.
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
    while ((ptr = strstr(ptr, "Cao")) != NULL)
	{
        memmove(ptr + 4, ptr + 3, strlen(ptr + 3) + 1);
        memcpy(ptr, "Ling", 4);
        ptr += 4;
    }	
	
	fprintf(outputFile, "%s", string);
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
