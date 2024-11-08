/*
 * Test A17
 * Ввести номер месяца и вывести название времени года.
 */
 
#include <stdio.h>

int main()
{
    int month;

    scanf("%d", &month);

    if (month == 1 || month == 2 || month == 12)
        printf("winter");
    else
    if (month >= 3 && month <= 5)
        printf("spring");
    else
    if (month >= 6 && month <= 8)
        printf("summer");
    else
    if (month >= 9 && month <= 11)
        printf("autumn");
        
    return 0;
}
