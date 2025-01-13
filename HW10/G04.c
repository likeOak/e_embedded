/*
 * G4
 * В файле input.txt даны два слова не более 100 символов каждое, разделенные 
 * одним пробелом. Найдите только те символы слов, которые встречаются в обоих 
 * словах только один раз. Напечатайте их через пробел в файл output.txt в лексикографическом порядке.
 */

#include <stdio.h>
#include <string.h>

int main()
{	
	enum {STRING_SIZE = 101};
	enum {ALPHABET_SIZE = 26};
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

	char word1[STRING_SIZE];
	char word2[STRING_SIZE];
	char letters_list[ALPHABET_SIZE] = {0};
	
    fscanf(inputFile, "%s %s", word1, word2);
    
    size_t len_word1 = strlen(word1);
    size_t len_word2 = strlen(word2);
		
	for (int i = 0; i < len_word1; i++)
		for (int j = 0; j < len_word2; j++)
		{
			if (word1[i] == word2[j])
				letters_list[word1[i] - 'a']++;				
		}
		
	for (int i = 0; i < ALPHABET_SIZE; i++)
	{
		if (letters_list[i] == 1)
		{
			fprintf(outputFile, "%c ", 'a' + i);		    
		}
	}	
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
