#include <stdio.h>

int main()
{
    int i, j;
    printf("Enter a number\n");
    scanf("%d", &j);
    for (i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", j, i, j * i);
    }

    return 0;
}