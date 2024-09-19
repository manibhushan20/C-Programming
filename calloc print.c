#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i, n = 6;

    // Dynamically allocate memory for an array of 6 integers
    arr = (int *)calloc(n, sizeof(int));

    // Input 6 integers from the user and store them in the array
    printf("Enter 6 integers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the array
    printf("\nThe array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
