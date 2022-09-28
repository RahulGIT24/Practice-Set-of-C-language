#include <stdio.h>
int Mystrcopy(char str2[], char str[])
{
    char *ptr2 = str2;
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr2 = *ptr;
        printf("%c", *ptr2);
        ptr++;
    }
}
int main()
{
    char str[45] = "I am a good boy";
    char str2[45];
    printf("The value of str2 before Mystrcopy is %d\n", *str2);
    printf("The value of str2 after Mystrcopy is: ");
    Mystrcopy(str2, str);
    return 0;
}