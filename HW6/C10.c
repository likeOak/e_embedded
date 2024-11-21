/*
 * C10
 * Составить функцию, печать всех простых множителей числа. 
 * Использовать ее для печати всех простых множителей числа.
 */

#include <stdio.h>

void print_simple(int);

int main()
{
	int n;
	
	scanf("%d", &n);
	
	print_simple(n);	
	
	return 0;
}

void print_simple(int n)
{
    while (n % 2 == 0) 
    {
        printf("%d ", 2);
        n /= 2;
    }
    
    for (int i = 3; i * i <= n; i += 2) 
    {
        while (n % i == 0) 
        {
            printf("%d ", i);
            n /= i;
        }
    }
    
    if (n > 2) 
    {
        printf("%d", n);
    }	
}
