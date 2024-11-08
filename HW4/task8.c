/*
 * Test A10
 * Ввести пять чисел и найти  наименьшее из них. 
 */
#include <stdio.h>

int main()
{
    int a1, a2, a3, a4, a5;
    int min;

    scanf("%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5);

    min = a1;

    if (a2 < min)
        min = a2;        
    if (a3 < min)
        min = a3;
    if (a4 < min)
        min = a4;
    if (a5 < min)
        min = a5;
    
    printf("%d", min);

    return 0;
}
