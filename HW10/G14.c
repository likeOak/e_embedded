/*
 * G14
 * В файле input.txt в одной строке фамилию, имя и отчество. Сформировать 
 * файл приветствие output.txt, где останутся имя и фамилия
 */

#include <stdio.h>
#include <string.h>

int main()
{	
	enum {STRING_SIZE = 101};
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

	char name[STRING_SIZE];
	char surname[STRING_SIZE];
	
	fscanf(inputFile, "%s", surname);
	fscanf(inputFile, "%s", name);
	
	fprintf(outputFile, "Hello, %s %s!", name, surname);
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
