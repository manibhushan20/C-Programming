#include<stdio.h>
int countPositive(int *arr,int count)  {
    count=0;
    for(int i=0;i<7;i++)  {
    if(arr[i]>0)  {
        count++;  }  }
 return count;  }   
int main() {
    int arr[]={1,2,3,-3,-9,8,-12};
  int count=countPositive(arr, count);
    printf("Total positive numbers=%d",count);
    return 0;  }