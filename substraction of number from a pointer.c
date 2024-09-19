#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = &arr[2];

    printf("Before subtraction: *p = %d\n", *p);
    
    p = p - 1;

    printf("After subtraction: *p = %d\n", *p);
    
    return 0;
}
