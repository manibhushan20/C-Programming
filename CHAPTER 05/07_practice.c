#include <stdio.h>

int star(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the number of lines ");
    scanf("%d", &n);
    star(n);
    return 0;
}