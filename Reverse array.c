#include<stdio.h>
int main()   {
    int arr[5];
    for(int i=0;i<5;i++)  {
    printf("Enter the %d number:",i+1); 
    scanf("%d",&arr[i]);
    }
 for(int i=4;i>=0;i--)  {
 printf("The number %d will be:",4-i+1);
 printf("%d\n",arr[i]);   }
 return 0;   }