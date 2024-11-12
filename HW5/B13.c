/*
 * Test B13
 * Посчитать количество четных и нечетных цифр числа
 */

#include <stdio.h>

int main()
{
    int n;
    int odd = 0;
    int even = 0;
    int digit;

    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit % 2 == 0)
            even++;
        else
            odd++;
        n /= 10; 
    }
    
    printf("%d %d\r\n", even, odd);     

    return 0;
}
