/*
 * Test A12
 * На вход подается произвольное трехзначное число, напечать сумму цифр
 */
#include <stdio.h>

int main()
{
    int a;
    int result;

    scanf("%d", &a);

    result = (a % 10) + (a / 10 % 10) + (a / 100 % 10);
    
    printf("%d\r\n", result); 

    return 0;
}