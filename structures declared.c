#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main
{
    typedef struct student
    {
        int rollnumber;
        char name[50];
        char department[50];
        char course[10];
        int yearofjoining;
    } student;

    student arr[2];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i].rollnumber);
        scanf("%[^\n]s", arr[i].name);
        scanf("%[^\n]s", arr[i].course);
        scanf("%d", &arr[i].yearofjoining);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d", &arr[i].rollnumber);
        printf("%[^\n]s", arr[i].name);
        printf("%[^\n]s", arr[i].course);
        printf("%d", &arr[i].yearofjoining);
    }
    return 0;
}
