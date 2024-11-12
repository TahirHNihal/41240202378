#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the values of a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    int statement1 = (a > b);
    int statement2 = (b == c);
    int statement3 = (a + b > c);

    printf("Statement 1 (a > b): %d", statement1);
    printf("\nStatement 2 (b == c): %d", statement2);
    printf("\nStatement 3 (a + b > c): %d", statement3);

    return 0;
}
