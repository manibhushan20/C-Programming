#include<stdio.h>
int main()  {
int n,i,sum=1,a=1,b=1;
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=n;i++) {
    if(i==1) { } 
    else if(i==2){}
        else {
   sum=a+b;
   a=b;
   b=sum;}
       printf("The %d fibonacci number is:%d\n",i,sum); }
   return 0;  }
