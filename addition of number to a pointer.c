#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Assign pointer to the first element of the array

    int n = 2; // Number to add to the pointer
    ptr += n; // Add the number to the pointer

    printf("The value at the new pointer location is: %d\n", *ptr);

    return 0;
}
