/*
 * G5
 * В файле input.txt дана символьная строка не более 1000 символов. 
 * Необходимо заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и строчные. Результат записать в output.txt.
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
		
	for (int i = 0; i < len; i ++)
	{
		if (input[i] == 'a' || input[i] == 'A')
			input[i]++;
		else
		if (input[i] == 'b' || input[i] == 'B')
			input[i]--;
		
		fprintf(outputFile, "%c", input[i]);
	}
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
