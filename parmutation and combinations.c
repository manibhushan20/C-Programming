#include<stdio.h>
int factorial(int x)     {
    int fact=1;
    for(int i=2;i<=x;i++)   {
        fact=fact*i;   }
     return fact;   }
     
//     int permutation(int n,int r)   {
     //    int pcr=factorial(n)/factorial(n-r);
        // return pcr;    }
         
         
       int main()    {
           int n,r;
           printf("Enter n:");
           scanf("%d",&n);
           printf("Enter r:");
           scanf("%d",&r);
     //      int npr=permutation(n,r);
     int npr=factorial(n)/factorial(n-r);
           printf("%d",npr);
           return 0;   }
           