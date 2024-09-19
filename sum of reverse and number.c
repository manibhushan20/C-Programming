#include<stdio.h>
int main()  {
int n,r=0,original,sum=0;
printf("Enter a number:");
scanf("%d",&n);
original=n;
while(n>0)  {
    r=r*10;
    r=r + n%10;
    n=n/10; }
  printf("reverse of number=%d\n",r);
 printf("sum of number and its reverse is:%d",sum=original+r);
 return 0;   }
    