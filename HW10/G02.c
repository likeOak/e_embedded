/*
 * G2
 * Считать число N из файла input.txt. Сформировать строку из N символов. 
 * N четное число, не превосходящее 26. На четных позициях должны находится 
 * четные цифры в порядке возрастания, кроме 0, на нечетных позициях - заглавные 
 * буквы в порядке следования в английском алфавите. Результат записать в файл output.txt
 */

#include <stdio.h>

int main()
{
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

	int n = 0;
    fscanf(inputFile, "%d", &n);
		
	int digit_idx = 0;
	int even_number[] = {2, 4, 6, 8};	
	for (int i = 0; i < n / 2; i ++)
	{
		fprintf(outputFile, "%c", 'A' + i);
		fprintf(outputFile, "%c", '0' + even_number[digit_idx++]);
		digit_idx %= 4;
	}
	
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}
