#include <stdio.h>

int main()
{
    int i = 1, n = 10, sum = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("%d", sum);

    return 0;
}