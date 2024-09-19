#include<stdio.h>
int main()    {
    int posi,i,n;
    int arr[100];
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    printf("Enter the %d elements of array",n);
    for(i=0;i<n;i++)   {
    scanf("%d",&arr[i]);  }
    printf("Enter the location where you wish to delete element:");
    scanf("%d",&posi);
 if (posi>=n+1)   {
    printf("Deletion not posible:");   }
else {
    for(i=posi-1;i<n-1;i++)
    arr[i]=arr[i+1];
    printf("Resultant Array:\n");
    for(i=0;i<n-1;i++)   
    printf("%d\n",arr[i]);     };
    return 0;  }
    