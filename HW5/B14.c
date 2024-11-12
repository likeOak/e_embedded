/*
 * Test B14
 * Дана последовательность ненулевых целых чисел, в конце последовательности число 0. Посчитать количество чисел.
 */

#include <stdio.h>

int main()
{
    int n = 1;
    int count = 0;

    while (n != 0)
    {
        scanf("%d", &n);
        count++;
    }
    
    printf("%d", count - 1);
    
    return 0;
}
