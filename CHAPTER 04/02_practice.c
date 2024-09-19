#include <stdio.h>

int main()
{
    int n = 10;
    for (int i = 10; i >= 1; i--)
    {
        printf("%d*%d=%d\n", i, n, n * i);
    }
    return 0;
}