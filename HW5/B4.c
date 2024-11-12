/*
 * Test B4
 * Ввести целое число и определить, верно ли, что в нём ровно 3 цифры
 */
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n >= 100 && n <= 999)
        printf("YES");
    else
        printf("NO");

    return 0;
}
