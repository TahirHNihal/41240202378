#include <stdio.h>

void main()
{
    float X, C;
    int A, B;

    printf("Enter the value of X: ");
    scanf("%f", &X);

    if (X > (int)X)
    {
        A = (int)X + 1;
    }
    else
    {
        A = (int)X;
    }

    B = (int)X;

    if (X < 0)
    {
        C = -X;
    }
    else
    {
        C = X;
    }

    printf("\nA = %d, B = %d, C = %.1f", A, B, C);
}
