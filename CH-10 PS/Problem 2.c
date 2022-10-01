#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    FILE *table;
    table = fopen("table.txt", "w");
    for (int i = 1; i < 11; i++)
    {
        fprintf(table, "%d X %d = %d\n", num, i, num * i);
    }
    fclose(table);
    printf("Table of %d is successfully stored in table.txt", num);
    return 0;
}