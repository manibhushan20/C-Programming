#include<stdio.h>
int main()   {
    int arr[99],size,t;
    printf("How many elements you want to store in array?\n:");
    scanf("%d",&size);
    printf("\nEnter %d elements:\n",size);  
    for(t=0;t<size;t++)   
    scanf("%d",&arr[t]);
    printf("\nElements of this one dimensional array is:\n");
    for(t=0;t<size;t++)
    printf("% d  ",arr[t]);
    return 0;   }
