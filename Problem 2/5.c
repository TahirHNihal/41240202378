#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter value of X and Y: ");
    scanf("%d %d", &x, &y);

    printf("Incremented Value: %d\n", x += y);
    printf("Decremented Value: %d\n", x -= 2 * y);

    return 0;
}