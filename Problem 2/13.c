#include <stdio.h>
#include <math.h>

void main()
{
    double x, result;

    printf("Enter the value for x: ");
    scanf("%lf", &x);


    double x_radians = x * M_PI / 180.0;

    result = sin(x_radians) + cos(x_radians) + tan(x_radians);

    printf("%.6f\n", result);
}
