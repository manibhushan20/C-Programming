#include <stdio.h>

int main()
{
    int sum = 0;
    printf("***sum of yhe numbers odduring in the multiplication table of 8***");
    for (int i = 1; i <= 10; i++)
    {
        int table = 8 * i;
        sum = sum + table;
    }
    printf("sum=%d", sum);
    return 0;
}