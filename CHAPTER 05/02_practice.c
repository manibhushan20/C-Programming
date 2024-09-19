#include <stdio.h>

int fahrenheit(int cel)
{
    int fahren = (cel * 9 / 5) + 32;
    return fahren;
}
int main()
{
    int cel;
    printf("Enter the temprature in celcius  ");
    scanf("%d", &cel);
    int fahren = fahrenheit(cel);
    printf("Temprature in fahrenheit is %d", fahren);

    return 0;
}