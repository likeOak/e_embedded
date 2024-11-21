/*
 * Test C3
 * Написать функцию, которая возвращает среднее арифметическое двух переданных ей аргументов (параметров).
 * int middle(int a, int b)
 */
#include <stdio.h>

int middle(int, int);

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    printf("%d", middle(a, b));

    return 0;
}

int middle(int a, int b)
{
    return (a + b) / 2;
}
