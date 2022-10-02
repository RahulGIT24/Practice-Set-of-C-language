#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int resultFunc(char comp, char you)
{
    if (comp == you)
    {
        return 0;
    }
    else if (comp == 'S')
    {
        if (you == 'G')
        {
            return 1;
        }
        else if (you == 'W')
        {
            return -1;
        }
    }
    else if (comp == 'W')
    {
        if (you == 'S')
        {
            return 1;
        }
        else if (you == 'G')
        {
            return -1;
        }
    }
    else if (comp == 'G')
    {
        if (you == 'W')
        {
            return 1;
        }
        else if (you == 'S')
        {
            return -1;
        }
    }
}
int main()
{

    char comp, you;

    srand(time(0));
    int num = rand() % 3 + 1;
    if (num == 1)
    {
        comp = 'S';
    }
    else if (num == 2)
    {
        comp = 'W';
    }
    else if (num == 3)
    {
        comp = 'G';
    }
    printf("Computer has selected, now it's your turn...\n");
    printf("Enter (S) for snake (W) for water and (G) for gun\n");
    scanf("%c", &you);
    int result = resultFunc(comp, you);
    if (result == 0)
    {
        printf("It's a Tie!\n");
    }
    else if (result == 1)
    {
        printf("You won!\n");
    }
    if (result == -1)
    {
        printf("You Lose!\n");
    }
    else
    {
        printf("Only Characters are allowed....\n");
    }
    printf("You choose %c and computer choose %c", you, comp);
    return 0;
}