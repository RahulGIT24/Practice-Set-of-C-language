#include <stdio.h>

int main()
{
    int a, b, c;
    FILE *ptr;
    ptr = fopen("file1.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    fclose(ptr);
    printf("First 3 integers were %d,%d,%d", a, b, c);
    return 0;
}