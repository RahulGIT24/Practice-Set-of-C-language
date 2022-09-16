#include <stdio.h>

int main()
{
    int i, factorial = 1;
    for (i = 1; i <= 5; i++)
    {
        factorial *= i;
    }
    printf("%d\n", factorial);
    return 0;
}