/*
 * D16
 * Написать логическую рекурсивную функцию и используя ее определить 
 * является ли введенное натуральное число точной степенью двойки.
 */

#include <stdio.h>

int is2pow(int);

int main()
{	
	int n;	
	scanf("%d", &n);
	
	if (is2pow(n))
		printf("YES");
	else
		printf("NO");
	
	return 0;
}

int is2pow(int n)
{	
	if (n == 1)
		return 1;
		
	if (n % 2 != 0 || n == 0)
		return 0;
		
	return is2pow(n / 2);
}
