#include <stdio.h>

int var = 10;

int main()
{
    printf("Global: %d\n", var);

    int var = 20;

    printf("Local: %d\n", var);

    // C. Explicitly print the value of the global variable

    return 0;
}