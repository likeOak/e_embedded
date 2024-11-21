/*
 * C15
 * Составить функцию логическую функцию, которая определяет, верно ли, 
 * что в заданном числе все цифры стоят по возрастанию. Используя данную функцию решить задачу.
 */

#include <stdio.h>

void grow_up(int);

int main()
{
	float n;

    scanf("%f", &n);

    grow_up(n);
	
	return 0;
}

void grow_up(int n)
{
    int prev;
    int digit;

    prev = n % 10;
    n /= 10;
    while (n > 0)
    {
        digit = n % 10;
        if (digit >= prev)
        {
            printf("NO");
            break;
        }
        prev = digit;
        n /= 10;            
    }
    
    if (n == 0)
        printf("YES");
}
