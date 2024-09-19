#include <stdio.h>
void multiply_by_value(int num)
{
    num = num * 10;
    // call by value
}
void multiply_by_reference(int *num)
{
    *num = (*num) * 10;
    // call by reference
}


int main()
{
    int value = 5;

    printf("The value before multiplication is %d\n", value);
    
    multiply_by_value(value);
    printf("The value after multiplication by call by value is %d\n", value);

    multiply_by_reference(&value);
    printf("The value after multiplication by call by reference is %d", value);

    return 0;
}