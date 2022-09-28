#include <stdio.h>
int ocuurance(char str[], char c)
{
    char *ptr = str;
    int count =0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char str[] = "Rahuuuuul90ll78";
    printf("The occurance of l in %s is %d", str, ocuurance(str, 'u'));
    return 0;
}