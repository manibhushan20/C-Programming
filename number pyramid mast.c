#include<stdio.h>
int main()    {
int n;
printf("Enter any number.");
scanf("%d",&n);
int nsp=n-1;
for(int i=1;i<=n;i++)     {
    for(int q=1;q<=nsp;q++)   {
        printf(" ");  }
   nsp--;
   for(int j=1;j<=i;j++)   {
       printf("%d",j);     }
 int a=i-1;
 for(int k=2;k<=i;k++)    {
       printf("%d",a);   
       a--;    }
       printf("\n");   }
    
     return 0;  }