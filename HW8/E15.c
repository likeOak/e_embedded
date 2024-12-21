/*
 * E15
 * Считать 10 чисел в диапазоне от -500 до 500 и разложить по двум массивам: 
 * в одни помещать только положительные, во второй - только отрицательные. Числа, равные нулю, игнорировать. Вывести на экран все элементы обоих массивов.
 */

#include <stdio.h>

void arr_read(int *, int);

int arr_select_positive(int *, int *, int);
int arr_select_negative(int *, int *, int);

void arr_print(int *, int);

int main()
{
	enum {SIZE = 10};
	int a[SIZE];
	int out_positive[SIZE];
	int out_negative[SIZE];
	int count_positive = 0;
	int count_negative = 0;
	
	arr_read(a, SIZE);		
		
	count_positive = arr_select_positive(a, out_positive, SIZE);
	count_negative = arr_select_negative(a, out_negative, SIZE);
	
	arr_print(out_positive, count_positive);
	arr_print(out_negative, count_negative);
	
	return 0;
}

void arr_read(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		scanf("%d", arr + i);	
}

void arr_print(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

int arr_select_positive(int *arr, int *out, int n)
{
    int count = 0;
    
    for (int i = 0; i < n; i++)
    {
		if (arr[i] > 0)
		{
			out[count] = arr[i];
			count++;
		}
	}
	return count;
}

int arr_select_negative(int *arr, int *out, int n)
{
    int count = 0;
    
    for (int i = 0; i < n; i++)
    {
		if (arr[i] < 0)
		{
			out[count] = arr[i];
			count++;
		}
	}
	return count;
}

