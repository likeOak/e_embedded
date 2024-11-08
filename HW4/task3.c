/*
 * Test A14
 * Дано трехзначное число, напечатать максимальную цифру
 */
#include <stdio.h>

int main()
{
    int n;
    int max;
    int b, c;

    scanf("%d", &n);
    
    max = n % 10;
    b = n / 10 % 10;
    c = n / 100 % 10;

    if (b > max)
        max = b;    
    if (c > max)
        max = c;
    
    printf("%d", max);

    return 0;
}
