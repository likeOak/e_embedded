/*
 * Test B5
 * Ввести целое число и найти сумму его цифр.
 */

#include <stdio.h>

int main()
{
    int n;
    int result;

    scanf("%d", &n);

    while (n > 0)
    {
        result += n % 10;
        n /= 10; 
    }
    
    printf("%d\r\n", result); 

    return 0;
}
