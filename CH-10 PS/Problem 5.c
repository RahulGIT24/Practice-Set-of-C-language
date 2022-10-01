#include <stdio.h>

int main()
{
    int num;
    FILE *ptr;
    FILE *ptr1;
    ptr = fopen("file4.txt", "r");

    fscanf(ptr, "%d", &num);
    ptr1 = fopen("file4.txt", "w");
    fprintf(ptr1, "%d", num * 2);
    fclose(ptr);
    fclose(ptr1);
    return 0;
}