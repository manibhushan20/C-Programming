#include<stdio.h>
int main()  {
    int n;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    int nst=1;
    int nsp=n/2;
    for(int i=1;i<=n;i++)   {
        for(int j=1;j<=nsp;j++)   {
            printf(" ");   }
       for(int k=1;k<=nst;k++)    {
           printf("*");   }
         int lm=n/2+1;
     if(i<lm)  {
         nsp--; 
         nst+=2;  }
         else {
             nsp++;   
             nst-=2;}
             
           printf("\n"); }
           return 0;    }