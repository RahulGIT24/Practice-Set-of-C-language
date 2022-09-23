#include <stdio.h>

void increment(int *num);
int main()
{
    int a = 90;
    printf("The value of a is %d\n", a);
    increment(&a);
    printf("The value of a is %d\n", a);
    return 0;
}

void increment(int *num)
{
    *num = 10 * *num;
}