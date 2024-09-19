#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float average;
};

void displayStudent(struct Student s);

int main() {
    struct Student students[4];
    int i;

    // Read the details of the four students
    for (i = 0; i < 4; i++) {
        printf("Enter the details of student %d:\n", i+1);
        printf("Roll No.: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Address: ");
        scanf("%s", students[i].address);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Average: ");
        scanf("%f", &students[i].average);
        printf("\n");
    }

    // Display the details of the four students
    for (i = 0; i < 4; i++) {
        printf("Details of student %d:\n", i+1);
        displayStudent(students[i]);
        printf("\n");
    }

    return 0;
}

void displayStudent(struct Student s) {
    printf("Roll No.: %d\n", s.rollNo);
    printf("Name: %s\n", s.name);
    printf("Address: %s\n", s.address);
    printf("Age: %d\n", s.age);
    printf("Average: %f\n", s.average);
}
