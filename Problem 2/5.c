#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter value of X and Y: ");
    scanf("%d %d", &x, &y);

    printf("Incremented Value: %d", x += y);
    printf("\nDecremented Value: %d", x -= 2 * y);

    return 0;
}
