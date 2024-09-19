#include<stdio.h>
int main()    {
    int n;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:");
    for(int i=0;i<n;i++)   {
    scanf("%d",&arr[i]);  }
    int max=arr[0];
    for(int i=0;i<n;i++)   {
        if(max<arr[i]) 
            max=arr[i];  }
              int min=arr[0];
    for(int i=0;i<n;i++)   {
        if(min>arr[i]) 
           min=arr[i];  }
           
        printf("minimunm=%d\n",min);        
      printf("maximum=%d",max);
      return 0;   }
