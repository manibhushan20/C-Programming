#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Allocate memory for the array using calloc
    int *arr = (int*) calloc(n, sizeof(int));

    // Check if allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.");
        exit(1);
    }
    
   //   printf("Enter Array elements: ");
//    for (int i = 0; i < n; i++) {
//        scanf("%d ", &arr[i]);    
//    }

    // Print the elements of the array
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the memory allocated for the array
    free(arr);

    return 0;
}
