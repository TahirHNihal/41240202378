#include <stdio.h>

void main()
{
    int a, b, c;

    printf("Enter the values of a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    int statement1 = (a > b);
    int statement2 = (b < c);
    int statement3 = (a + b > c);

    printf("1) %d", statement1);
    printf("\n2) %d", statement2);
    printf("\n3) %d", statement3);
}
