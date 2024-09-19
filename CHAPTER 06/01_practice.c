#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr;
    ptr = &a;

    printf("The address of variable is %d\n ", &a);
    printf("The address of variable is %d\n", ptr);
    printf("The address of pointer is %d\n", &ptr);
    printf("The value of variable is %d\n", a);
    printf("The value of variable is %d\n", *(&a));
    printf("The value of variable is %d", *ptr);

    return 0;
}