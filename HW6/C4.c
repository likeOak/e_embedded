/*
 * C4
 * Описать функцию вычисления f(x) по формуле:
 * f(x)= x*x при -2 ≤ x < 2;
 * x*x+4x+5 при x ≥ 2;
 * 4 при x < -2.
 * Используя эту функцию для n заданных чисел, 
 * вычислить f(x). Среди вычисленных значений найти наибольшее.
 */

#include <stdio.h>

int calc_fx(int);

int main()
{
	int number;
	int max; 
	
	scanf("%d", &number);
	max = calc_fx(number);
	
	while (number != 0)
	{
		scanf("%d", &number);
		
        if (number == 0) 
        {
            break;
        }
        
        if (calc_fx(number) > max)
			max = calc_fx(number);
	}
	printf("%d", max);
	
	return 0;
}

int calc_fx(int x)
{
	if (x >= -2 && x < 2)
		return x * x;
	if (x >= 2)
		return x * x + 4 * x + 5;
	if (x < -2)
		return 4;
	return 0;	
}
