/*
 * C17
 * Составить логическую функцию, которая определяет, верно ли, что в заданном числе сумма цифр равна произведению.
 */

#include <stdio.h>

void is_happy_number(int);

int main()
{
	float n;

    scanf("%f", &n);

    is_happy_number(n);
	
	return 0;
}

void is_happy_number(int n)
{
    int digit;
    int sum = 0;
    int mult = 0;
    
	digit = n % 10;
	sum = digit;
	mult = digit;
	n /= 10; 
	while (n > 0)
	{
		digit = n % 10;
		sum += digit;
		mult *= digit;
		n /= 10; 
	}
	if (sum == mult)
		printf("YES");
	else
		printf("NO");
}
