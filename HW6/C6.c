/*
 * C6
 * Сколько зерен на доске
 */

#include <stdio.h>
#include <math.h>

unsigned long long int calc_seeds(int);

int main()
{
	int N; 
	
	scanf("%d", &N);
	
	printf("%llu", calc_seeds(N));
	
	return 0;
}

unsigned long long int calc_seeds(int n)
{
	return pow(2, n - 1);
}
