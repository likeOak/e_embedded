/*
 * G8
 * В файле input.txt дана строка, не более 1000 символов, содержащая буквы, 
 * целые числа и иные символы. Требуется все числа, которые встречаются в строке, 
 * поместить в отдельный целочисленный массив. Например, если дана строка 
 * "data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0. Вывести массив по возрастанию в файл output.txt.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}


int main()
{	
	enum {STRING_SIZE = 1001};
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

	int numbers[STRING_SIZE];
		
	int num_count = 0;
	
	while (!feof(inputFile))
	{
		int number;
		if (fscanf(inputFile, "%d", &number) == 1)
		{
			numbers[num_count++] = number;
		}
		else 
		{
			fgetc(inputFile);
		}
	}
	
    qsort(numbers, num_count, sizeof(int), compare);

	for (int i = 0; i < num_count; i++)
	{
		fprintf(outputFile, "%d ", numbers[i]);
	}
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
