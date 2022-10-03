#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr;
    arr = (int *)calloc(5, sizeof(arr));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of integer %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of %d integer is %d\n", i + 1, arr[i]);
    }

    //* Rellocating integer
    arr = realloc(arr, 10 * sizeof(arr));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of integer %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d integer is %d\n", i + 1, arr[i]);
    }
    return 0;
}