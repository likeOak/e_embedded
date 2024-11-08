/*
 * Test A15
 * Определить уравнение прямой по координатам двух точек. Уравнение вида y=k*x+b
 */
 
#include <stdio.h>

int main()
{   
    int x1, y1, x2, y2;
    double k, b;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    k = (double)(y2-y1)/(x2-x1);
    b = y1 - k * x1; 
    
    printf("%.2f %.2f", k, b);
     
    return 0;
}
