/*
 * Test B19
 * Ввести натуральное число и определить, верно ли, что сумма его цифр равна 10.
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

    if (result == 10)
        printf("YES");
    else
        printf("NO");

    return 0;
}
