#include<stdio.h>
int main() {
 int n,a=0;
 printf("Enter a number:");
 scanf("%d",&n);
  if(n==1) { printf("1 is neither composite nor prime.");}
 for(int i=2;i<n-1;i++)   {
   if(n%i==0) {
     a=1;
     break;
 }
}
if(a==0) printf("The given number is prime.\n");
 else { printf("The given number is composite.\n");}
return 0;  }