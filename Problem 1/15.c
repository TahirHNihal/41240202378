#include <stdio.h>

int main()
{
    float num;

    printf("Enter a floating number: ");
    scanf("%f", &num);

    printf("Value: %10f", num);
    printf("\nValue: %2f", num);
    printf("\nValue: %.2f", num);
    printf("\nValue: %.0f", num);
    printf("\nValue: %e", num);
}