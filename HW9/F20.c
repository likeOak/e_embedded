/*
 * F20
 * Дан целочисленный массив из 10 элементов. 
 * Необходимо определить количество четных и нечетных чисел.
 * Если количество чётных чисел больше, чем количество нечётных, 
 * заменить каждое нечетное число на произведение нечетных цифр в его десятичной записи. 
 * Если количество нечётных чисел больше или равно количеству чётных, заменить каждое 
 * чётное число на произведение чётных цифр в его десятичной записи.
 */

#include <stdio.h>

void arr_print(int *a, int n);
int resultOfOddDigits(int num);
int resultOfEvenDigits(int num);

int main() 
{
	enum {SIZE = 10};
    int a[SIZE];
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < SIZE; i++)
	{
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
		{
            evenCount++;
        }
		else
		{
            oddCount++;
        }
    }
	
    if (evenCount > oddCount)
	{    
        for (int i = 0; i < 10; i++)
		{
            if (a[i] % 2 != 0)
			{
				a[i] = resultOfOddDigits(a[i]);
            }
        }
    }
	else
	{    
        for (int i = 0; i < 10; i++)
		{
            if (a[i] % 2 == 0)
			{
				a[i] = resultOfEvenDigits(a[i]);
            }
        }
    }

    arr_print(a, SIZE);

    return 0;
}

void arr_print(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int resultOfEvenDigits(int num)
{
    int result = 1;
    int hasEven = 0;

    while (num != 0)
	{
        int digit = num % 10;
        if (digit % 2 == 0)
		{
            result *= digit;
            hasEven = 1;
        }
        num /= 10;
    }

	if (hasEven)
		return result;
	return 0;
}

int resultOfOddDigits(int num)
{
    int result = 1;
    int hasOdd = 0;

    while (num != 0)
	{
        int digit = num % 10;
        if (digit % 2 != 0)
		{
            result *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

	if (hasOdd)
		return result;
	return 0;
}
