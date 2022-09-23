#include <stdio.h>

int main()
{
    int a = 90;
    int *ptr = &a;
    printf("The address of a is %u\n", ptr);
    printf("The value of a is %u", *ptr);
    return 0;
}