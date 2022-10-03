#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    arr = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 7 * (i + 1);
        printf("%d X %d = %d\n", 7, i + 1, arr[i]);
    }

    arr = realloc(arr, 15 * sizeof(int));
    printf("After reallocating\n");
    for (int i = 0; i < 15; i++)
    {
        arr[i] = 7 * (i + 1);
        printf("%d X %d = %d\n", 7, i + 1, arr[i]);
    }
    return 0;
}