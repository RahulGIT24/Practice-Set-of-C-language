#include <stdio.h>
void decrypt(char str[])
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{
    char str[] = "Come on guys";
    decrypt(str);
    printf("decrypted string is %s", str);
    return 0;
}