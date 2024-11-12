/*
 * Test B8
 * Ввести целое число и определить, верно ли, что в нём ровно одна цифра «9».
 */

#include <stdio.h>

int main()
{
    int n;
    int digit;
    int count = 0;

    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit == 9)
            count++;
        n /= 10;            
    }
    
    if (count == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}
