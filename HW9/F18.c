/*
 * F18
 * Дана целочисленная квадратная матрица 10 х 10. реализовать алгоритм вычисления 
 * суммы максимальных элементов из каждой строки. Напечатать значение этой суммы. 
 * Предполагается, что в каждой строке такой элемент единственный
 */

#include <stdio.h>

int find_row_max(int row[], int size);

int main()
{
	enum {SIZE_X = 10};
	enum {SIZE_Y = 10};
	int matrix[SIZE_X][SIZE_Y];
	
	for (int i = 0; i < SIZE_Y; i++)
	{
		for (int j = 0; j < SIZE_X; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	
	int sum = 0;
	
	for (int i = 0; i < SIZE_Y; i++)
	{
		sum += find_row_max(matrix[i], SIZE_X);
	}
	
	printf("%d", sum);
	
	return 0;
}

int find_row_max(int row[], int size) 
{
    int max = row[0];
    for (int i = 1; i < size; i++) 
    {
        if (row[i] > max) 
        {
            max = row[i];
        }
    }
    return max;
}
