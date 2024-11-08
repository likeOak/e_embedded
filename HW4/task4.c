/*
 * Test A11
 * Напечатать сумму максимума и минимума.
 * Данные на входе:	      Пять целых чисел через пробел
 * Данные на выходе:    Одно целое число - сумма максимума и минимума
 */
#include <stdio.h>

int main()
{
    int a1, a2, a3, a4, a5;
    int min, max;

    scanf("%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5);

    min = a1;
    max = a1;

    if (a2 > max)
        max = a2;        
    if (a3 > max)
        max = a3;
    if (a4 > max)
        max = a4;
    if (a5 > max)
        max = a5;
    
    if (a2 < min)
        min = a2;        
    if (a3 < min)
        min = a3;
    if (a4 < min)
        min = a4;
    if (a5 < min)
        min = a5;    
    
    printf("%d", min + max);

    return 0;
}
