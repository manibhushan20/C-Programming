#include<stdio.h>
#include<string.h>
struct student  {
   char name[20];
   int rollNo;
   float marks;   
};
void show(struct student s)   {
    printf("The name of student is:%s\n",s.name);
    printf("The roll number of student is:%d\n",s.rollNo);
    printf("The marks of student is:%f\n",s.marks);   
}
int main()   {
    struct student s1;
    struct student *ptr;
    ptr=&s1;
    strcpy(ptr->name,"Manibhushan");
    ptr->rollNo=2204073;
//    ptr->marks=20.5;
(*ptr).marks=20.5;
    show(s1);
    return 0;  
}
    