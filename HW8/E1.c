/*
 * E1
 * Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива.
 */

#include <stdio.h>

int main()
{
	int a[5]; 
	
	for (int i = 0; i < 5; i++)
		scanf("%d", a + i);		
		
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += a[i];
		
	printf("%.3f", sum / 5.);
	
	return 0;
}


