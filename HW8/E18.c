/*
 * E18
 * В диапазоне натуральных чисел от 2 до N определить, сколько из них кратны любому из чисел в диапазоне от 2 до 9.
 */

#include <stdio.h>

int main()
{	
	enum {SIZE = 9 + 1};
	int n;
    int counts[SIZE] = {0};

    scanf("%d", &n);

    for (int i = 2; i <= 9; i++) 
    {
        counts[i] = (n / i) - ((2 - 1) / i);
    }

    for (int i = 2; i <= 9; i++) 
    {
        printf("%d %d\n", i, counts[i]);
    }
    
    return 0;
}

