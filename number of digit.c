#include<stdio.h>
int main()    {
int n,count;
printf("Enter a number:");
scanf("%d",&n);
while(n!=0) {
 n=n/10;
 count++;
}
printf("the number of digit is:%d",count);
return 0;
}
