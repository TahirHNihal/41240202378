#include <stdio.h>

int main()
{
    int intNum;
    float fltNum;
    char charVar;

    printf("Type an integer number:");
    scanf("%d", &intNum);

    printf("Type a float number:");
    scanf("%f", &fltNum);

    printf("Type a character:");
    scanf(" %c", &charVar);

    printf("\nThe interger value: %d", intNum);
    printf("\nThe floating point value: %f", fltNum);
    printf("\nThe character value: %c", charVar);

    return 0;
}
