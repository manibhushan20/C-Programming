#include<stdio.h>
int main() {
double x1,x2,x3,y1,y2,y3;
printf("Enter coordinates : ");
scanf("(%d,%d), (%d,%d),(%d,%d)",&x1,&y1,&x2,&y2,&x3,&y3);
double m1=(y2-y1)/(x2-x1);
double m2=(y3-y2)/(x3-x2);
if (m1==m2)
{
    printf("points lie on a line.");  }
else 
{
    printf("Do not lie on a line.");  }
    return 0;  }
    