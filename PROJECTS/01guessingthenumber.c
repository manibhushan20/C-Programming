#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Guess the number between 1 and 100\n ");
    do
    {
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower the number plase!\n");
        }
        else if (guess < number)
        {
            printf("Higher the number plase!\n");
        }

        else
        {
            printf("you guessed it rigt in %d attempts", nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}