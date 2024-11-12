/*
 * Test B3
 * Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.
 */
#include <stdio.h>

int main()
{
    int a, b;
    int sum = 0;

    scanf("%d%d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        sum += i * i;
    }
    printf("%d", sum);

    return 0;
}
