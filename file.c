#include <stdio.h>

int main() {
    char name1[100], name2[100];
    float salary1, salary2;

    // Get input from the user
    printf("Enter the name and salary of employee 1: ");
    scanf("%s%f", name1, &salary1);
    printf("Enter the name and salary of employee 2: ");
    scanf("%s%f", name2, &salary2);

    // Open the file in write mode
    FILE *fptr = fopen("employees.txt", "w");

    // Check if the file opened successfully
    if (fptr == NULL) {
        printf("Error opening file.");
        return 1;
    }

    // Write the employee data to the file
    fprintf(fptr, "Employee 1\n");
    fprintf(fptr, "Name: %s\n", name1);
    fprintf(fptr, "Salary: %.2f\n\n", salary1);
    fprintf(fptr, "Employee 2\n");
    fprintf(fptr, "Name: %s\n", name2);
    fprintf(fptr, "Salary: %.2f\n", salary2);

    // Close the file
    fclose(fptr);

    printf("Data written to file successfully.");

    return 0;
}
