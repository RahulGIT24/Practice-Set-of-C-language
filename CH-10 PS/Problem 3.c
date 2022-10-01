#include <stdio.h>

int main()
{
    FILE *f1;
    FILE *f2;
    f1 = fopen("file2.txt", "r");
    f2 = fopen("file3.txt","w");

    char c = getc(f1);
    while (c != EOF)
    {
        fprintf(f2,"%c",c);
        fprintf(f2,"%c",c);
        c = getc(f1);
    }

    return 0;
}