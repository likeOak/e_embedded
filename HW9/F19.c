/*
 * F19
 * Определить количество положительных элементов квадратной матрицы, 
 * превышающих по величине среднее арифметическое всех элементов главной диагонали. 
 * Реализовать функцию среднее арифметическое главной диагонали.
 */

#include <stdio.h>

enum {SIZE_Y = 5};

int average_main_diagonal(int matrix[][SIZE_Y], int n, int m);

int count_less_avg(int matrix[][SIZE_Y], int n, int m, int avg);

int main()
{
	enum {SIZE_X = 5};
	int matrix[SIZE_X][SIZE_Y];
	
	for (int i = 0; i < SIZE_Y; i++)
	{
		for (int j = 0; j < SIZE_X; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	
	int avg = average_main_diagonal(matrix, SIZE_X, SIZE_Y);
	
	int count = count_less_avg(matrix, SIZE_X, SIZE_Y, avg);
	
	printf("%d", count);
	
	return 0;
}

int average_main_diagonal(int matrix[][SIZE_Y], int n, int m) 
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i];
    }
    
    return sum / n;
}

int count_less_avg(int matrix[][SIZE_Y], int n, int m, int avg)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
			if (matrix[i][j] > avg)
				count++;
		}
    }
    
    return count;
}
