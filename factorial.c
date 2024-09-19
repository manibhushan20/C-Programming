#include<stdio.h>
int main()  {
    int i,n,f=1;
    printf("Enter the numer:");
    scanf("%d",&n);
    for(i=n;i>=1;i--) {
        f=f*i; }
    printf("factorial of %d is: %d",n,f);
    return 0; }