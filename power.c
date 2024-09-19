#include<stdio.h>
int main()   {
int a,b,power=1;
printf("Enter a base number:");
scanf("%d",&a);
printf("Enter a power number:");
scanf("%d",&b);
for(int i=1;i<=b;i++)    {
 power=power*a;
}
printf("%d raise to the power %d is:%d",a,b,power);
return 0;    }
 