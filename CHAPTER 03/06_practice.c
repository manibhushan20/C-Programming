#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    printf("Enter num1, num2, num3, num4");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("%d is the greatest", num1);
    }
    if (num2 > num3 && num2 > num4)
    {
        printf("%d is the greatest", num2);
    }
    if (num3 > num4)
    {
        printf(" %d is the greatest", num3);
    }
    else
    {
        printf(" %d is the greatest", num4);
    }
    return 0;
}