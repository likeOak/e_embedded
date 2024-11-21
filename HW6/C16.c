/*
 * C16
 * Составить функцию логическую функцию, которая определяет, верно ли, что число простое. Используя функцию решить задачу.
 */

#include <stdio.h>

void is_prime(int);

int main()
{
	float n;

    scanf("%f", &n);

    is_prime(n);
	
	return 0;
}

void is_prime(int n)
{
    if (n == 1 || n == 0)
    {
        printf("NO");
        return;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("NO");
            return;
        }
    }
   
    printf("YES");
}
