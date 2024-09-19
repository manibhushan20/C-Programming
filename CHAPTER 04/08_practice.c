#include <stdio.h>

int main()
{
    int n, a = 0;
    01guessingthenumberprintf("Enter the number");
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1 is neither prime nor composite");
    }
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
        }
    }
    if (a == 0)
    {
        printf("%d is prime number",n);
    }
    else
    {
        printf("%d is composite number",n);
    }
    return 0;
}