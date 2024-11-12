/*
 * Test B11
 * Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.
 */

#include <stdio.h>

int main()
{
    int n;
    int result = 0;

    scanf("%d", &n);

    while (n > 0)
    {
        result = result * 10 + n % 10;
        n /= 10;         
    }
    
    printf("%d\r\n", result);     

    return 0;
}
