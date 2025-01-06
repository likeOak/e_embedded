/*
 * F8
 * В последовательности записаны целые числа от M до N ( M меньше N, M больше 
 * или равно 1)в произвольном порядке, но одно из чисел пропущено (остальные встречаются ровно по одному разу). 
 * N не превосходит 1000. Последовательность заканчивается числом 0. Определить пропущенное число.
 */

#include <stdio.h>

int find_missing(int *, int N);

int arr_read(int *);

void arr_print(int *, int);

int main()
{
	enum {SIZE = 1001};
	int a[SIZE];
	
	int a_size = arr_read(a);
		
	printf("%d", find_missing(a, a_size));
	
	return 0;
}

int arr_read(int *a)
{
	int i = 0;
	while (scanf("%d", &a[i]))
	{
		if (a[i] == 0)
			break;
		i++;	
	}
	return i;
}

void arr_print(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int find_missing(int *a, int N)
{
	int min = a[0];
	int max = a[0];
	
	int real_sum = a[0];
	
	for (int i = 1; i < N; i++)
	{
		real_sum += a[i];
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}
	
	int  calc_sum = (int)((min + max) / 2. * (N + 1));
	
	return calc_sum - real_sum;
}
