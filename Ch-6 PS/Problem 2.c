#include <stdio.h>

void func(int a)
{
    printf("The address of a is %u\n", &a);
}
int main()
{
    int i = 90;
    printf("The value of i is %d\n", i);
    printf("The address of i is %u\n", &i);
    func(i);
    printf("The address of i is %u\n", &i);
    return 0;
}