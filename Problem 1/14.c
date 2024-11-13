#include <stdio.h>

void globalVar(){
    int var = 10;
    printf("\nGlobal: %d", var);
}

int main()
{
    globalVar();

    int var = 20;

    printf("\nLocal: %d", var);
    
    globalVar();

    return 0;
}
