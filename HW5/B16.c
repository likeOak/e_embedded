/*
 * Test B16
 * Составить программу для вычисления НОД с помощью алгоритма Евклида. Даны два натуральных числа. Найти наибольший общий делитель.
 */

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        } else
        {
            b = b - a;
        }
    }
    
    printf("%d", a);
    
    return 0;
}
