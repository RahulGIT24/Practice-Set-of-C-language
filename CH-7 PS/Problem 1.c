#include <stdio.h>

int main()
{
    int numbers[10];
    int *ptr;
    ptr = &numbers[0];
    ptr = ptr + 2;
    if (ptr == &numbers[2])
    {
        printf("It points to same location in memory\n");
    }
    else
    {
        printf("It points to same location in memory\n");
    }

    return 0;
}