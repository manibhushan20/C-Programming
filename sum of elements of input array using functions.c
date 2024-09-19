#include<stdio.h>
int addition(int arr[],int n)   {
    int sum=0,i;
    for(i=0;i<n;i++)  {
          sum+=arr[i];  }
          return sum;    }
          
 int main() {
           int n;
    printf("Enter the number of elements:");   scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:");
    for(int i=0;i<n;i++)   {
        scanf("%d",&arr[i]);    }
  int  result = addition(arr,n);
        printf("The adfition elements of array is :%d",result);
        return 0;  }
        