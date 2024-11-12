/*
 * Test B15
 * Дана последовательность ненулевых целых чисел, в конце последовательности число 0. Посчитать количество четных чисел.
 */

#include <stdio.h>

int main()
{
    int n = 1;
    int sum;

    while (n != 0)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
            sum++;
    }
    
    printf("%d", sum - 1);
    
    return 0;
}
