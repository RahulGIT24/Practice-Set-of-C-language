#include <stdio.h>

int main()
{
    int i = 90;
    int *ptr = &i;
    int **ptr2 = &ptr;
    printf("The value of i is %u", **ptr2);
    return 0;
}