#include <stdio.h>
int main()
{
    float r;

    printf("Enter radius: ");
    scanf("%f", &r);

    float area = 2 * 3.1416 * r;
    printf("Area %.2f", area);

    return 0;
}