#include <stdio.h>

int main()
{
    int principal = 25000;
    int year = 5;
    int rate = 6;
    float SI = principal * year * rate / 100;
    printf("The simple interest is=%f", SI);
    return 0;
}