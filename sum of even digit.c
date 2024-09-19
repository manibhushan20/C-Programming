#include<stdio.h>
int main()   {
int n,ld,sum=0;
printf("Enter a number:");
scanf("%d",&n);
for(int i=n;i>=0;i--) {         
ld= n%10;
if (ld%2==0) {
sum=sum + ld;}
n=n/10; }   
printf("%d is sum of digits.",sum);  
return 0;  }