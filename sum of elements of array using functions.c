#include<stdio.h>
int sum(int arr[5])   {
    int sum=0;
    for(int i=0;i<=4;i++)  {
        sum+=arr[i];   }
        return sum;  }
     
   int main()  {
       int arr[5]={1,5,9,4,3};
     int  result=sum(arr);
     printf("The sum of elenent of array is %d",result);
     return 0;  }