#include <stdio.h>
int count = 0;
void Mystrlen(char str[])
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        ptr++;
        count++;
    }
}
int main()
{
    char str[45] = "Rahul";
    Mystrlen(str);
    printf("Length of the string is %d", count);
    return 0;
}