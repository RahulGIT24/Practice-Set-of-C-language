#include <stdio.h>
#include <strings.h>
int main()
{
    char str[35];
    char str2[35];
    printf("Enter first string\n");
    scanf("%s", str);
    printf("Enter second string\n");
    scanf("%s", str2);
    int compare = strcmp(str, str2);
    printf("First String is %s\n", str);
    printf("Second String is %s\n", str2);
    if (compare == 0)
    {
        printf("Strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }

    return 0;
}