/*
 * Test B10
 * Ввести целое число и определить, верно ли, что все его цифры расположены в порядке возрастания.
 */

#include <stdio.h>

int main()
{
    int n;
    int prev;
    int digit;

    scanf("%d", &n);

    prev = n % 10;
    n /= 10;
    while (n > 0)
    {
        digit = n % 10;
        if (digit >= prev)
        {
            printf("NO");
            break;
        }
        prev = digit;
        n /= 10;            
    }
    
    if (n == 0)
        printf("YES");

    return 0;
}
