#include <stdio.h>

int main()
{
    int intNum;
    float fltNum;
    char charVar;

    printf("Enter an integer, floating number and a charecter: ");
    scanf("%d %f %c", &intNum, &fltNum, &charVar);

    printf("The interger value: %d", intNum);
    printf("\nThe floating point value: %f", fltNum);
    printf("\nThe character value: %c", charVar);

    return 0;
}
