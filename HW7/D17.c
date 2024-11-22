/*
 * D17
 * Функция Аккермана определяется рекурсивно для неотрицательных целых чисел m и n следующим образом:
 * Реализуйте данную функцию
 */

#include <stdio.h>

int akkerman(int, int);

int main()
{	
	int m, n;
	
	scanf("%d%d", &m, &n);
	
	printf("%d", akkerman(m, n));
	
	return 0;
}

int akkerman(int m, int n)
{	
	if (m == 0)
		return n + 1;
	if (m > 0 && n == 0)
		return akkerman(m - 1, 1);	
	if (m > 0 && n > 0)
		return akkerman(m - 1, akkerman(m, n - 1));
	return 0;	
}
