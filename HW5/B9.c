/*
 * Test B9
 * Ввести целое число и определить, верно ли, что все его цифры четные
 */

#include <stdio.h>

int main()
{
    int n;
    int digit;

    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit % 2 != 0)
        {
            printf("NO");
            break;
        }
        n /= 10;            
    }
    
    if (n == 0)
        printf("YES");

    return 0;
}
