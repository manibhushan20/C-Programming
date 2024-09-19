#include <stdio.h>
#include <stdlib.h>

int main() {
    int *table;
    int i, size = 10;

    // Allocate memory for the multiplication table of 7
    table = (int*) malloc(sizeof(int) * size);

    // Generate the multiplication table of 7 up to 10 numbers
    for (i = 0; i < size; i++) {
        table[i] = 7 * (i + 1);
    }

    // Print the original table
    printf("Multiplication table of 7 up to 10 numbers:\n");
    for (i = 0; i < size; i++) {
        printf("%d x 7 = %d\n", i + 1, table[i]);
    }

    // Use realloc to increase the size of the table to store up to 15 numbers
    size = 15;
    table = (int*) realloc(table, sizeof(int) * size);

    // Generate the multiplication table of 7 up to 15 numbers
    for (i = 10; i < size; i++) {
        table[i] = 7 * (i + 1);
    }

    // Print the updated table
    printf("\nMultiplication table of 7 up to 15 numbers:\n");
    for (i = 0; i < size; i++) {
        printf("%d x 7 = %d\n", i + 1, table[i]);
    }

    // Free the memory allocated for the table
    free(table);

    return 0;
}
