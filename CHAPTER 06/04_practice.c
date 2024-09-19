#include <stdio.h>

void AddAndAvg(int i, int j, int *sum, float *avg)
{
    *sum = i + j;
    *avg = *sum / 2;
}

int main()
{
    int a = 5, b = 5, sum;
    float avg;
    AddAndAvg(a, b, &sum, &avg);
    printf("the sum of numbers is %d\n", sum);

    printf("the average of numbers is %f", avg);

    return 0;
}