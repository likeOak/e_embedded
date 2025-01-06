/*
 * F10
 * Дана строка состоящая из маленьких латинских букв 'a'..'z'. В конце 
 * строки точка. Необходимо заменить повторяющиеся буквы на <буква><количество повторений>
 */

#include <stdio.h>
#include <string.h>

void string_compress(char *, char *);

int main()
{
	enum {SIZE = 1001};
	
	char in[SIZE];
	char out[SIZE];
	
	scanf("%1000s", in);
	
	string_compress(in, out);
	
	printf("%s", out);
	
	return 0;
}

void string_compress(char *input, char *output)
{
    int count = 1;
    int out_idx = 0;

    for (int i = 1; input[i - 1] != '.'; i++) 
    {
        if (input[i] == input[i - 1]) 
        {            
            count++;
        } 
        else 
        {
            output[out_idx++] = input[i - 1];
            if (count >= 1) 
            {
                out_idx += sprintf(&output[out_idx], "%d", count);
            }
            count = 1;
        }
    }

    output[out_idx] = '\0';
}
