#include <stdio.h>

int main()
{
    float x, y;

    printf("Enter value of X and Y: ");
    scanf("%f %f", &x, &y);

    float add = x + y;
    float sub = x - y;
    float mul = x * y;
    int div = (int)x / (int)y;
    int rem = (int)x % (int)y;

    printf("Addition: %.1f", add);
    printf("\nSubtraction: %.1f", sub);
    printf("\nMultiplication: %.1f", mul);
    printf("\nQuotient: %d", div);
    printf("\nReminder: %d", rem);

    return 0;
}