#include <stdio.h>

struct student {
    int roll;
    char name[100];
};

void display(struct student s) {
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
}

int main() {
    struct student s1; //= {1, "John"};
    printf("Enter name:");
    scanf("%[^\n]%",&s1.name);
    printf("Enter rollnumber:");
    scanf("%d",&s1.roll);
    display(s1);
    return 0;
}
