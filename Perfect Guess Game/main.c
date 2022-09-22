//* Author - Rahul
//* Date - 22-09-2022
//* Project - Perfect Guess Game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, guess = 1, ask;
    srand(time(0));
    num = rand() % 100 + 1;
    while (ask != num)
    {
        printf("Enter a number\n");
        scanf("%d", &ask);
        if (ask > num)
        {
            printf("Please enter a smaller number\n");
        }
        else if (ask < num)
        {
            printf("Please enter a larger number\n");
        }
        else
        {
            printf("You have Guessed it right in %d guesses!\n", guess);
        }
        guess++;
    }

    return 0;
}