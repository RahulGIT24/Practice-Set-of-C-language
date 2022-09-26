#include <stdio.h>

void mulTable(int multable[], int num)
{
    printf("The multiplication of table are:\n");
    for (int i = 0; i < 10; i++)
    {
        multable[i] = num * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, multable[i]);
    }
    printf("***********************************************************\n");
}
int main()
{
    int table[3][10];
    mulTable(table[0], 2);
    mulTable(table[1], 7);
    mulTable(table[2], 9);
    return 0;
}