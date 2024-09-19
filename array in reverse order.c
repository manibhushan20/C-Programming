#include<stdio.h>
int main()    {
    int i,n;
    printf("Enter number of arrays:");
    scanf("%d",&n);
 int arr[n];
 printf("Enter the elements:");
 for(int i=0;i<n;i++)  {
     scanf("%d",&arr[i]);   }
printf("Given array is:");  
for(int i=0;i<n;i++)   {
     printf("%d ",arr[i]);     }
int arrb[n];
for(int i=0;i<n;i++)  
   arrb[i]=arr[n-1-i]; 
  printf("\nReverse array is:");
      for(int i=0;i<n;i++)   {
          printf("%d ",arrb[i]);   }
  return 0; }
 
  
     