#include <stdio.h>

int main()
{
    int eng;
    int math;
    int science;
    printf("Enter marks percentage of eng,math,science ");
    scanf("%d %d %d", &eng, &math, &science);
    int total = (math + eng + science) / 3;
    if (total > 40 && eng > 33 && math > 33 && science > 33)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
    return 0;
}