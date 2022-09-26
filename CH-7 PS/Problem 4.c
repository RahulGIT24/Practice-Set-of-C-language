#include <stdio.h>

int main()
{
    int table[10];
    int ask;
    printf("Enter the number\n");
    scanf("%d", &ask);
    for (int i = 0; i < 10; i++)
    {
        table[i] = ask * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", ask, i + 1, table[i]);
    }

    return 0;
}