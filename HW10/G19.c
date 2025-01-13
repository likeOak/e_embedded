/*
 * G19
 * Разработать функцию дана строка из маленьких английских букв. 
 * Составить из символов палиндром максимальной длинны. При составлении 
 * палиндрома буквы в палиндроме должны быть расположены в лексикографическом порядке. 
 * Записать ответ в файл output.txt.
 */

#include <stdio.h>
#include <string.h>

void palindrom_creator(char *word, char *result);

int main()
{	
	enum {STRING_SIZE = 1001};
    FILE *inputFile;

    inputFile = fopen("input.txt", "r");

	char input[STRING_SIZE] = {0};
	char output[STRING_SIZE] = {0};
	
    fgets(input, sizeof(input), inputFile);
    
    fclose(inputFile);
    
    palindrom_creator(input, output);
            
	FILE *outputFile;
    outputFile = fopen("output.txt", "w");
    fprintf(outputFile, "%s", output);
    fclose(outputFile);
    
    return 0;
}

void palindrom_creator(char *word, char *result)
{
	enum {ALPHABET_SIZE = 26};	
	char letters_list[ALPHABET_SIZE] = {0};
	
	size_t len_string = strlen(word);
	for (int i = 0; i < len_string; i++)
	{
		if (word[i] >= 'a' && word[i] <= 'z')
			letters_list[word[i] - 'a']++;
	}
	
	char midchar = '\0';
	
	for (int i = 0; i < ALPHABET_SIZE; i++)
	{
		if (letters_list[i] % 2 == 1)
		{
			midchar = 'a' + i;
			letters_list[i]--;
			break;
		}
	}
	
	int str_idx = 0;
	for (int i = 0; i < ALPHABET_SIZE; i++)
	{
		//if (letters_list[i] % 2 == 0)
		{
			for (int j = 0; j < letters_list[i] / 2; j++)
			{				
				result[str_idx++] = 'a' + i;
			}
		}
	}
	
	if (midchar != '\0')
	{
		result[str_idx++] = midchar;
	}
	
	for (int i = ALPHABET_SIZE - 1; i >= 0 ; i--)
	{
		//if (letters_list[i] % 2 == 0)
		{
			for (int j = 0; j < letters_list[i] / 2; j++)
			{				
				result[str_idx++] = 'a' + i;
			}
		}
	}
	result[str_idx] = '\0';
	
	return;
}
