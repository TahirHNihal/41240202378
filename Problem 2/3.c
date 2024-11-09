#include <stdio.h>
int main()
{
    float a, b;

    printf("Enter value of a and b: ");
    scanf("%f %f", &a, &b);

    float x = (3.31 * (a * a) + 2.01 * (b * b * b)) / (7.16 * (b * b) + 2.01 * (a * a * a));

    printf("X = %f", x);

    return 0;
}
