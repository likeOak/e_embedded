/*
 * F2
 * ставит в начало массива все четные элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел между собой.
 */

#include <stdio.h>

void sort_even_odd(int n, int a[]);

void arr_read(int *, int);

void arr_print(int *, int);

int main()
{
	enum {SIZE = 20};
	int a[SIZE];
	
	arr_read(a, SIZE);		
		
	sort_even_odd(SIZE, a);
	
	arr_print(a, SIZE);
	
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

void sort_even_odd(int n, int a[]) 
{
    int temp[n];
    int even_idx = 0;
    int odd_idx = 0;
    
    for (int i = 0; i < n; i++) 
	{
        if (a[i] % 2 == 0) 
		{
            even_idx++;
        }
    }

    odd_idx = even_idx; 
    even_idx = 0; 

    for (int i = 0; i < n; i++) 
	{
        if (a[i] % 2 == 0) 
		{
            temp[even_idx++] = a[i];
        } else 
		{
            temp[odd_idx++] = a[i];
        }
    }
    
    for (int i = 0; i < n; i++) 
	{
        a[i] = temp[i];
    }
}
