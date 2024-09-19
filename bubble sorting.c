#include<stdio.h>
  void bubble_sort(int arr[],int n)   {
      int temp;
      for(int i=0;i<n;i++)  {
          for(int j=0;j<n-i-1;j++)   {
              if(arr[j]>arr[j+1])   {
                  temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;    }
          }
      }   }
  int main()  {
      int arr[]={5,2,9,1,7};
      int n=sizeof(arr)/sizeof(arr[0]);
      printf("original arrray:");
      for(int i=0;i<n;i++)   {
          printf("%d  ",arr[i]);    }
       printf("\n");
       
     bubble_sort(arr,n);
     printf("sorted array:");
      for(int i=0;i<n;i++)   {
          printf("%d  ",arr[i]);    }
          printf("\n");
          return 0;  }