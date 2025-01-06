/*
 * F17
 * Составить функцию которая находит след матрицы в двумерном массиве. 
 * След матрицы - это сумма элементов на главной диагонали.
 */

#include <stdio.h>

int matrixFingerprint(int size, int a[size][size]) 
{
    int fingerprint = 0;
    for (int i = 0; i < size; i++)
	{
        fingerprint += a[i][i];
    }
    return fingerprint;
}

int main()
{
	enum {SIZE = 5};
    int a[SIZE][SIZE];
	
    for (int i = 0; i < 5; i++) 
	{
        for (int j = 0; j < 5; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }

    printf("%d", matrixFingerprint(5, a));

    return 0;
}
