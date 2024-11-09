#include <stdio.h>

int main()
{

    int intNum = -150;
    float fltNum = 123.125;

    int fltToInt = fltNum;
    printf("Assignment: %f assigned to an int produces %d", fltNum, fltToInt);

    float intToFlt = intNum;
    printf("\nAssignment: %d assigned to an float produces %f", intNum, intToFlt);

    printf("\nType Casting: (float) %d produces %f", intNum, (float)intNum);
    printf("\nType Casting: (int) %f produces %d", fltNum, (int)fltNum);

    return 0;
}