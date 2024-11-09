#include <stdio.h>

int main()
{
    unsigned int uInt = 4294967295;
    unsigned long int uLongInt = 4294967295;
    unsigned long long int uLongLongInt = 18446744073709551615U;
    unsigned short int uShortInt = 65535;

    printf("The unsigned int value: %u", uInt);
    printf("\nThe unsigned long int value: %lu", uLongInt);
    printf("\nThe unsigned long long int value: %llu", uLongLongInt);
    printf("\nThe unsigned short int value: %hu", uShortInt);

    return 0;
}
