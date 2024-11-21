/*
 * C12
 * Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
 * sin(x) = x - x3/3! + x5/5! - x7/7! + ...(x в радианах)
 */

#include <stdio.h>

float m_sin(float);

int main()
{
	float degrees, radians;

    scanf("%f", &degrees);

    radians = degrees * 3.141592653589793 / 180;    
		
	printf("%.3f", m_sin(radians));	
	
	return 0;
}

float m_sin(float x)
{
	float delta = x;
    float sum = delta; 
    int n = 1;        

    while (delta > 0.001 || delta < -0.001) 
	{
        n += 2;
        delta = -delta * x * x / (n * (n - 1));
        sum += delta;
    }

    return sum;
}
