#include <stdio.h>

int main()
{
    int table[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        table[i] = 5 * (i + 1);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", table[i]);
    }
    return 0;
}