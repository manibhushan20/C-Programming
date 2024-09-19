#include <stdio.h>

int main() {
    int integer;
    
    // Open the file for reading
    FILE* file = fopen("integer.txt", "r");
    if (file == NULL) {
        printf("Error: unable to open file.");
        return 1;
    }
    
    // Read the integer from the file
    fscanf(file, "%d", &integer);
    
    // Close the file
    fclose(file);
    
    // Double the value of the integer
    integer *= 2;
    
    // Open the file for writing
    file = fopen("integer.txt", "w");
    if (file == NULL) {
        printf("Error: unable to open file.");
        return 1;
    }
    
    // Write the new integer to the file
    fprintf(file, "%d", integer);
    
    // Close the file
    fclose(file);
    
    return 0;
}
