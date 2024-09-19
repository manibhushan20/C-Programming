#include<stdio.h>
int main()     {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
   
   int arr[n];
   for(int i=0;i<n;i++)  {
   printf("Enter the number %d :",i+1);
   scanf("%d",&arr[i]);   }
   
  int product=1;
    for(int i=0;i<n;i++)  {
        product=product*arr[i];   }
    printf("%d",product);
    return 0;  }