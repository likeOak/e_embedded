/*
 * Test B7
 * Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, НЕ обязательно стоящие рядом.
 */

#include <stdio.h>

int main()
{
    int number_in, number_process;
    int digit;
    int result_flag = 0;

    scanf("%d", &number_in);

    while (number_in > 0)
    {
        digit = number_in % 10;
        number_in /= 10;
        number_process = number_in;
        while (number_process > 0)
        {            
            if (digit == number_process % 10)
            {
                result_flag = 1;
                break; 
            }
            number_process /= 10;
        }
        if (result_flag)
            break;
    }
    if (result_flag)
        printf("YES");
    else
        printf("NO");

    return 0;
}
