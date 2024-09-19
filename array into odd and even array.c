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
     printf("\nEven array is:");
     for(int i=0;i<n;i++)  {
      if(arr[i]%2==0)  {
          printf("%d ",arr[i]);  }  }
          
               printf("\nodd array is:");
     for(int i=0;i<n;i++)  {
      if(arr[i]%2!=0)  {
          printf("%d ",arr[i]);  }  }
     
   return 0;   }
     