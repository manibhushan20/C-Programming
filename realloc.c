#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;

    // Allocate memory for an array of integers
    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Error: Failed to allocate memory\n");
        return 1;
    }

    // Initialize the array
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    // Print the array
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Resize the array
    size = 10;
    arr = (int *)realloc(arr, size * sizeof(int));
    if (arr == NULL) {
        printf("Error: Failed to reallocate memory\n");
        return 1;
    }

    // Initialize the new elements of the array
    for (int i = 5; i < size; i++) {
        arr[i] = i + 1;
    }

    // Print the array again
    printf("Array elements after resizing:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the memory allocated for the array
    free(arr);

    return 0;
}
