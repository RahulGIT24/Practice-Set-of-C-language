//* Write a function to sort odd and even numbers from an array
#include <stdio.h>

void evenFunc(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%d\n", array[i]);
        }
    }
}
void oddFunc(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (array[i] % 2 != 0)
        {
            printf("%d\n", array[i]);
        }
    }
}
int main()
{
    int length;
    int array[] = {12, 67, 45, 22, 34, 78, 90};
    length = sizeof(array) / sizeof(array[0]);
    printf("The even numbers is this array\n");
    evenFunc(array, length);
    printf("The odd numbers is this array\n");
    oddFunc(array, length);
    return 0;
}