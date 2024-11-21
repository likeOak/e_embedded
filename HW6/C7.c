/*
 * C7
 * Составить функцию, которая переводит число N из десятичной 
 * системы счисления в P-ичную систему счисления.
 */

#include <stdio.h>
#include <math.h>

int base_convert(int, int);

int main()
{
	int N, P; 
	
	scanf("%d%d", &N, &P);
	
	printf("\n%d", base_convert(N, P));
	
	return 0;
}

int base_convert(int n, int p)
{
	int result = 0;
	int position = 0;
	do 
	{
        result += (n % p) * pow(10, position++); 
        n /= p;
    } while (n > 0);
    
    return result;
}
