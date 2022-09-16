#include <stdio.h>

int main()
{
    int i, n=8,sum=0;
    for (i = 1; i < 11; i++)
    {
        sum += n*i;
    }
    printf("%d",sum);
    return 0;
}