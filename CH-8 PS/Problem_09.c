#include <stdio.h>

void presentNot(char str[], char c)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            printf("YES '%c' character is present in this string", c);
            break;
        }
        ptr++;
    }
}
int main()
{
    char str[] = "RAHUL";
    presentNot(str, 'A');
    return 0;
}