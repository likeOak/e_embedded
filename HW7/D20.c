/*
 * D20
 * Написать рекурсивную функцию возведения целого числа n в степень p.
 * -100 ≤ n ≤ 100 и 0 ≤ p ≤ 100
 */

#include <stdio.h>

long long int recurs_power(int, int);

int main()
{
	int n, p;
	
	scanf("%d%d", &n, &p);
	
	printf("%lld", recurs_power(n,p));
	
	return 0;
}

long long int recurs_power(int n, int p)
{		
	if (p == 0)
		return 1;
	return n * recurs_power(n, p - 1);
}
