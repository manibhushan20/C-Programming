#include <stdio.h>

// Define a structure
struct student {
    int roll_no;
    char name[20];
    float marks;
};

// Define a union
union marks {
    int marks1;
    int marks2;
};

int main() {
    // Declare variables of structure and union type
    struct student s;
    union marks m;

    // Take input for structure members
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Take input for union members
    printf("Enter marks 1: ");
    scanf("%d", &m.marks1);
    printf("Enter marks 2: ");
    scanf("%d", &m.marks2);

    // Print values of structure members
    printf("\nStructure values:\n");
    printf("Roll number: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Marks: %f\n", s.marks);

    // Print values of union members
    printf("\nUnion values:\n");
    printf("Marks 1: %d\n", m.marks1);
    printf("Marks 2: %d\n", m.marks2);

    return 0;
}
