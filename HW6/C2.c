/*
 * Test C2
 * Составить функцию, возведение числа N в степень P. int power(n, p) и привести пример ее использования.
 */
#include <stdio.h>

int power(int, int);

int main()
{
    int n, p;

    scanf("%d%d", &n, &p);

    printf("%d", power(n, p));

    return 0;
}

int power(int n, int p)
{
    int result = n;

    if (p == 0)
        return 1;
    
    for (int i = 1; i < p; i++)
    {
        result *= n;
    }
    return result;
}
