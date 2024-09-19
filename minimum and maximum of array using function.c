#include <stdio.h>

void  minMax(int arr[], int n, int min, int max)
{
    min = arr[0];
    max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
//    }
 //   for (int i = 0; i < n; i++)
 //   {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    
}

int main()
{
    int n;
    printf("Enter the number of elements in an arrray:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min, max;
    minMax(arr, n, min, max);
    return 0;
}
