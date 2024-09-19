#include <stdio.h>

void multiply_by_ten(int *num)
{
    *num = (*num) * 10;
}
int main()
{
    int a = 8;
    printf("Original value is %d \n", a);

     multiply_by_ten(&a);
    printf("changed value is %d ", a);
    return 0;
}