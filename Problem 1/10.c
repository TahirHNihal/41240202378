#include <stdio.h>

int main()
{
    long int longInt = 1234567890;
    long long int longLongInt = 9223372036854775807;
    long double longDouble = 1.1E+30;
    short int shortInt = 32767;

    printf("The long int value: %ld", longInt);
    printf("\nThe long long int value: %lld", longLongInt);
    printf("\nThe long double value: %.5Lf", longDouble);
    printf("\nThe short int value: %hd", shortInt);

    return 0;
}
