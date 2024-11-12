/*
 * Test B18
 * Вывести на экран ряд чисел Фибоначчи, состоящий из n элементов.
 */

#include <stdio.h>

int main()
{
    int n;
    int prev = 0;
    int cur = 1;
    int sum;
    
    scanf("%d", &n);

    printf("1 ");

    for (int i = 1; i < n; i++)
    {
        sum = prev + cur;
        printf("%d ", sum);
        prev = cur;
        cur  = sum;         
    }
    
    
    
    return 0;
}
