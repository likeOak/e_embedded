/*
 * F16
 * Известно, что шахматная доска имеет размерность 8х8 и состоит из клеток 2х цветов, 
 * например, черного и белого (см. рисунок). Каждая клетка имеет координату, состоящую 
 * из буквы и цифры. Горизонтальное расположение клетки определяется буквой от A до H, 
 *  вертикальное – цифрой от 1 до 8. Заметим, что клетка с координатой А1 имеет черный цвет. 
 * Требуется по заданной координате определить цвет клетки.
 */

#include <stdio.h>

void getCellColor(char column, int row);

int main()
{
	char column;
	int row;
	
	scanf("%c%d", &column, &row);
	
	getCellColor(column, row);
	
	return 0;
}

void getCellColor(char column, int row)
{
    int columnIndex = column - 'A' + 1;

    if ((columnIndex + row) % 2 == 0)
	{
        printf("BLACK");
    }
	else
	{
        printf("WHITE");
    }
}
