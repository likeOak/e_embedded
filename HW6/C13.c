/*
 * C13
 * Составить функцию, которая вычисляет cos как сумму ряда (с точностью 0.001)
 * cos(x) = 1 - x2/2! + x4/4! - x6/6! + ... (x в радианах)
 */

#include <stdio.h>

float m_cos(float);

int main()
{
	float degrees, radians;

    scanf("%f", &degrees);

    radians = degrees * 3.141592653589793 / 180;    
		
	printf("%.3f", m_cos(radians));	
	
	return 0;
}

float m_cos(float x)
{
	float delta = 1;
    float sum = delta;
    int n = 0;

    while (delta > 0.001 || delta < -0.001) 
	{
        n += 2;
        delta = -delta * x * x / (n * (n - 1));
        sum += delta;
    }

    return sum;
}
