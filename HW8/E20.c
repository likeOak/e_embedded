/*
 * E20
 * Переставить цифры в числе так, что бы получилось максимальное число.
 */

#include <stdio.h>

int num_to_arr(int, int *, int);
void arr_sort_desc(int *, int);
void print_number(int *, int);


int main()
{	
	enum {SIZE = 10};
	int n;
    int digits[SIZE];
    int count = 0;

    scanf("%d", &n);

	count = num_to_arr(n, digits, SIZE);
	arr_sort_desc(digits, count);

	print_number(digits, count);
    
    return 0;
}

int num_to_arr(int number, int *digits, int n)
{
    int count = 0;
	while (number > 0)
    {
		digits[count] = number % 10;
		number /= 10;
		count++;
	}
	return count;
}

void print_number(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
}

void m_swap(int *a, int*b)
{
	 *a = *a ^ *b;
     *b = *a ^ *b;
     *a = *a ^ *b;        
}

void arr_sort_desc(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - i - 1; j++) 
		{
            if (arr[j] < arr[j + 1]) 
			{
				m_swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
