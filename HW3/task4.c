/*
 * Test A5
 * Ввести три числа, найти их  среднее арифметическое
 */

#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);
    
    printf("%f\r\n", (a + b + c) / 3.0); 

    return 0;
}
