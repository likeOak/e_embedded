/*
 * C14
 * Составить функцию логическую функцию, которая определяет, верно ли, 
 * что сумма его цифр – четное число. Используя эту функцию решить задачу.
 */

#include <stdio.h>

void digit_sum_even(int);

int main()
{
	float n;

    scanf("%f", &n);

    digit_sum_even(n);
	
	return 0;
}

void digit_sum_even(int n)
{
	int sum = 0;
	
	while (n > 0)
    {
        sum += n % 10;
        n /= 10; 
    }
	if (sum % 2 == 0)
		printf("YES");
	else
		printf("NO");
}
