/*
 * Test A9
 * Ввести пять чисел и  вывести наибольшее из них 
 */
#include <stdio.h>

int main()
{
    int a1, a2, a3, a4, a5;
    int max;

    scanf("%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5);

    max = a1;

    if (a2 > max)
        max = a2;        
    if (a3 > max)
        max = a3;
    if (a4 > max)
        max = a4;
    if (a5 > max)
        max = a5;
    
    printf("%d", max);

    return 0;
}
