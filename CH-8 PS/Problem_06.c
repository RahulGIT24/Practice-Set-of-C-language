#include <stdio.h>
void encrypt(char str[])
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main()
{
    char str[] = "Come on guys";
    encrypt(str);
    printf("Encrypted string is %s", str);
    return 0;
}