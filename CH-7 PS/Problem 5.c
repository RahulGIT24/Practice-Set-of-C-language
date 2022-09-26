#include <stdio.h>

void reverse(int array[], int len)
{
    int temp;
    for (int i = 0; i < (len / 2); i++)
    {
        temp = array[i];
        array[i] = array[len - i - 1];
        array[len - i - 1] = temp;
    }
}
int main()
{
    int array[] = {12, 5, 4, 6, 7};
    int length = sizeof(array) / sizeof(array[0]);
    printf("Before reversing\n");
    for (int i = 0; i < length; i++)
    {
        printf("The value of %dth element is %d\n", i, array[i]);
    }

    reverse(array, length);
    printf("After reversing\n");
    for (int i = 0; i < length; i++)
    {
        printf("The value of %dth element is %d\n", i, array[i]);
    }

    return 0;
}