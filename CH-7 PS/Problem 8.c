#include <stdio.h>

void mulTable(int table[], int num)
{
    for (int i = 0; i < 10; i++)
    {
        table[i] = num * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, table[i]);
    }
    printf("**************************************************************\n");
}
int main()
{
    int table[3][10];
    printf("Enter 1st number number\n");
    scanf("%d", table[0]);
    printf("Enter 2nd number number\n");
    scanf("%d", table[1]);
    printf("Enter 3rd number\n");
    scanf("%d", table[2]);
    printf("The tables are as follow -:\n");
    mulTable(table[0], *table[0]);
    mulTable(table[1], *table[1]);
    mulTable(table[2], *table[2]);
    return 0;
}