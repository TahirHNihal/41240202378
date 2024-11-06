#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);

    int x = a - b / 3 + c * 2 - 1;
    int y = a - (b / (3 + c) * 2) - 1;
    int z = a - ((b / 3) + c * 2) - 1;

    printf("X = %d", x);
    printf("\nY = %d", y);
    printf("\nZ = %d", z);

    return 0;
}