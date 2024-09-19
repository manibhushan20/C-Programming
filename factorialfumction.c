#include<stdio.h>
int factorial(int x)  {
    int fact=1;
    for(int i=1;i<=x;i++)  {
    fact=fact*i;    }
    return fact;    }

int main()    {
    int n,i;
    printf("Enter number of upto which factorial is to be found:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)   {
    printf("The factorial of %d is:%d\n",i,factorial(i)); }
    return 0;   }