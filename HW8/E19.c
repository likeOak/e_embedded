/*
 * E19
 * Вывести в порядке следования цифры, входящие в десятичную запись натурального числа N.
 */

#include <stdio.h>

int num_to_arr(int, int *, int);
void arr_inverse(int *, int);
void arr_print(int *, int);


int main()
{	
	enum {SIZE = 10};
	int n;
    int digits[SIZE];
    int count = 0;

    scanf("%d", &n);

	count = num_to_arr(n, digits, SIZE);
	arr_inverse(digits, count);

	arr_print(digits, count);
    
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

void arr_print(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

void m_swap(int *a, int*b)
{
	 *a = *a ^ *b;
     *b = *a ^ *b;
     *a = *a ^ *b;        
}

void arr_inverse(int *arr, int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		m_swap(&arr[i], &arr[(n - 1) - i]);
	}	
}
