#include <stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("X++ : %d\n", x++);
    printf("++X : %d\n", ++x);
    printf("X-- : %d\n", x--);
    printf("--X : %d\n", --x);

    return 0;
}