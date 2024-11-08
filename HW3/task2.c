/*
 * Test A3
 * Ввести три числа, найти их сумму и произведение
 */
#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);
    
    printf("%d+%d+%d=%d\r\n", a, b, c, a + b + c);    
    printf("%d*%d*%d=%d\r\n", a, b, c, a * b * c);

    return 0;
}
