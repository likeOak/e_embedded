/*
 * G20
 * Считать предложение из файла input.txt и определить можно ли из английских 
 * букв предложения записанного в файле получить одно слово - палиндром. Ответ напечатать 
 * на стандартный поток вывода. Требуется реализовать логическую функцию и применить ее. is_palindrom(string)
 */

#include <stdio.h>
#include <string.h>

int is_palindrom(char string[]);

int main()
{	
	enum {STRING_SIZE = 1001};
    FILE *inputFile;

    inputFile = fopen("input.txt", "r");

	char input[STRING_SIZE];
	
    fgets(input, sizeof(input), inputFile);
    
    fclose(inputFile);
    
    if (is_palindrom(input))
		printf("YES");
	else
		printf("NO");
    
    return 0;
}

int is_palindrom(char string[])
{
	enum {ALPHABET_SIZE = 26};	
	char letters_list[ALPHABET_SIZE] = {0};
	
	size_t len_string = strlen(string);
	for (int i = 0; i < len_string; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
			letters_list[string[i] - 'a']++;
	}
	
	int odd_letters_count = 0;
	for (int i = 0; i < ALPHABET_SIZE; i++)
	{
		if (((letters_list[i]) % 2) == 1)
			odd_letters_count++;
	}
	
	if (odd_letters_count > 1)
		return 0;
	
	return 1;
}
