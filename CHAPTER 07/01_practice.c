#include <stdio.h>

int main()
{
    int arr[] = {2, 3, 4, 5};
    int *ptr = arr;
    ptr = ptr + 2;
    if (ptr == arr[2])
    {
        printf("pointing to the same memory location.");
    }
    else
        printf("pointing to the diffferent memory location.");
    return 0;
}