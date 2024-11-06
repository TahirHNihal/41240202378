#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("Max %d", x);
    }
    else
    {
        printf("Max %d", y);
    }

    return 0;
}