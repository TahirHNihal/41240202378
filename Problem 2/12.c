#include <stdio.h>
#include <math.h>

void main()
{
    double a, b, c;

    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\n%.2lf %.2lf", root1, root2);
    }
    else if (discriminant == 0)
    {
        double root = -b / (2 * a);
        printf("\n%.2lf", root);
    }
    else
    {
        printf("\nImaginary");
    }
}