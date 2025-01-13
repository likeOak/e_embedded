/*
 * G7
 * В файле input.txt считать символьную строку, не более 10 000 символов. 
 * Посчитать количество строчных (маленьких) и прописных (больших) букв в введенной строке. 
 * Учитывать только английские буквы. Результат записать в файл output.txt.
 */

#include <stdio.h>
#include <string.h>

int main()
{	
	enum {STRING_SIZE = 10001};
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

	char input[STRING_SIZE];
	
    fgets(input, sizeof(input), inputFile);    
	
	int letter = 0;
	int capitalLetter = 0;
	
    size_t len = strlen(input);
	for (int i = 0; i < len; i++)
	{
		if (input[i] >= 'a' && input[i] <= 'z')
		{
			letter++;
		}		
		if (input[i] >= 'A' && input[i] <= 'Z')
		{
			capitalLetter++;
		}
	}

	fprintf(outputFile, "%d %d", letter, capitalLetter);
	
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
