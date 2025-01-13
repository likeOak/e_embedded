/*
 * G13
 * В файле input.txt записан полный адрес файла (возможно, без расширения). 
 * Необходимо изменить его расширение на ".html" и записать результат в файл output.txt.
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
		
    size_t len = strlen(string);
    if (string[len - 1] == '\n')
    {
        string[len - 1] = '\0';
    }
    
    char *dot = strrchr(string, '.');
    char *slash = strrchr(string, '/');
    
    if (dot && (!slash || dot > slash))
	{
        strcpy(dot, ".html");
    }
	else
	{
		strcat(string, ".html");
    }
	
	fprintf(outputFile, "%s", string);
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
