#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter values of X and Y: ");
    scanf("%d %d", &x, &y);

    int result = x;
    result *= y;
    printf("Multiplication: %d", result);

    result = x;
    result /= y;
    printf("\nDivision: %d", result);

    return 0;
}
