#include <stdio.h>

int count_positive_integers(int arr[], int size)   {
    int count=0;
    for(int i=0;i<size;i++)
    if (arr[i]>0)  {
        count++;
    }
    return count;
}
int main()
{
    int arr[] = {3, -5, 7, 0, -2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
   int count= count_positive_integers(arr,size);
   printf("The number of positive intgegers is %d in an array.",count);
    return 0;
}