#include <stdio.h>

int main()
{
    int i, j = 10;
    for (i = j; i; i--)
    {
        printf("%d X %d = %d\n", j, i, j * i);
    }

    return 0;
}