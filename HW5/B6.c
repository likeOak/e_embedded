/*
 * Test B6
 * Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, стоящие рядом.
 */

#include <stdio.h>

int main()
{
    int number_in;
    int digit, prev_digit;

    scanf("%d", &number_in);

    prev_digit = number_in % 10;
    number_in /= 10;
    while (number_in > 0)
    {
        digit = number_in % 10;
        if (digit == prev_digit)
        {
            printf("YES");
            break;            
        }
        number_in /= 10;
        prev_digit = digit;
    }
    
    if (number_in == 0)
        printf("NO");

    return 0;
}
