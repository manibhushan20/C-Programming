#include<stdio.h>
int main()   {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=1;i<=n;i++)    {
        for(int j=1;j<=nsp;j++)  {
            printf(" ");    }
            nsp--;
           int b=1;
     for(int k=1;k<=i;k++)   {
         int d=b+64;
         char ch=(char)d;
         printf("%c",ch); 
         b++;  }
      int a=i-1;
      for(int q=2;q<=i;q++)   {
          int f=a+64;
          printf("%c",f);
          a--;   }
          printf("\n");   }
      return 0; }