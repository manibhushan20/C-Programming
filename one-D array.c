#include<stdio.h>
int main()
{
    int arr[99], size, t;
    printf("How many Elements You want to store in Array ? ");
    scanf("%d", &size);
    printf("\nEnter %d Elements\n", size);
    for(t=0; t<size; t++)
        scanf("%d", &arr[t]);
    printf("\nElements of this One-dimensional Array is:\n");
    for(t=0; t<size; t++)
        printf("%d ", arr[t]);
    return 0;
}