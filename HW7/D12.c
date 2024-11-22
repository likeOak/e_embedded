/*
 * D12
 * Дана монотонная последовательность, в которой каждое натуральное число k встречается 
 * ровно k раз: 1, 2, 2, 3, 3, 3, 4, 4, 4, 4,… Выведите первые n членов этой последовательности. Только один цикл for.
 */

#include <stdio.h>

int main()
{
	int n;
	int digit = 1;
	int digit_count = 0;
	
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		printf("%d ", digit);		
		digit_count++;
		if (digit_count >= digit)
		{
			digit++;
			digit_count = 0;
		}
	}
	
	return 0;
}
