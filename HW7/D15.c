/*
 * D15
 * Дана последовательность ненулевых целых чисел, завершающаяся числом 0. 
 * Ноль в последовательность не входит. Определите наибольшее значение числа 
 * в этой последовательности. Для решения задачи необходимо написать рекурсивную функцию вида:ядок. Составить рекурсивную функцию.
 */

#include <stdio.h>
#include <limits.h>

int max_find();

int main()
{
	int max = max_find();
	
	if (max != INT_MIN) // sequence isn't empty
		printf("%d", max);
	
	return 0;
}

int max_find()
{
	int n;	
	scanf("%d", &n);
	
	if (n == 0)
		return INT_MIN;
		
	int max_rest = max_find();
	if (n > max_rest)
		return n;
	return max_rest;
}
