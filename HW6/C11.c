/*
 * C11
 * Составить функцию, которая определяет наибольший общий 
 * делитель двух натуральных и привести пример ее использования.
 */

#include <stdio.h>

int nod(int, int);

int main()
{
	int a, b;
	
	scanf("%d%d", &a, &b);
	
	printf("%d", nod(a, b));	
	
	return 0;
}

int nod(int a, int b)
{
	while (b != 0) 
	{
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
