/*
 * Test B21
 * Дан текст состоящий из английских букв и цифр, заканчивается символом «.» Перевести все заглавные английские буквы в строчные.
 */
#include <stdio.h>

int main()
{
    char c;

    while (scanf("%c", &c) == 1 && c != '.')
    {
        if (c >= 'A' && c <= 'Z')
        {
            c = c + ('a' - 'A'); 
        }
        printf("%c", c); 
    }

    return 0;
}