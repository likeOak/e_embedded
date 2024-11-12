/*
 * Test B17
 * Счастливые числа
 * Ввести натурально число и напечатать все числа от 10 до введенного числа - у которых сумма цифр равна произведению цифр
 */

#include <stdio.h>

int main()
{
    int n;
    int number;
    int digit;
    int sum = 0;
    int mult = 0;

    scanf("%d", &number);

    for (int i = 10; i <= number; i++)
    {
        n = i;
        digit = n % 10;
        sum = digit;
        mult = digit;
        n /= 10; 
        while (n > 0)
        {
            digit = n % 10;
            sum += digit;
            mult *= digit;
            n /= 10; 
        }
        if (sum == mult)
            printf("%d\r\n", i); 
    }
    
    return 0;
}
