/*
 * Test A18
 * Ввести два числа. Если первое число больше второго, то программа печатает слово Above. 
 * Если первое число меньше второго, то программа печатает слово Less. А если числа равны, программа напечатает сообщение Equal.
 */
 
#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    if (a > b)
        printf("Above");
    else
    if (a < b)
        printf("Less");
    else
        printf("Equal");
        
    return 0;
}
