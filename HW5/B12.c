/*
 * Test B12
 * Организовать ввод натурального числа с клавиатуры. 
 * Программа должна определить наименьшую и наибольшую цифры, которые входят в состав данного натурального числа.
 */

#include <stdio.h>

int main()
{
    int n;
    int min = 9;
    int max = 0;
    int digit;

    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit > max)
            max = digit;
        if (digit < min)
            min = digit;
        n /= 10;            
    }
    
    printf("%d %d\r\n", min, max);     

    return 0;
}
