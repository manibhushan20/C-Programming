#include<stdio.h>
int main()    {
int n,sum;
printf("Enter a number:");
scanf("%d",&n);
if(n%2!=0)
{
    sum=n-n/2;
}
else {
sum=n/2;   }
printf("Sum of series is %d:",sum);
return 0;  }