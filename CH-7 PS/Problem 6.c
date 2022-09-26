#include <stdio.h>

int count = 0;
int positiveNot(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
}
int main()
{

    int arr[] = {1, 2, -9, -6, -4, -9, -10, -8, 9, 90};
    int length = sizeof(arr) / sizeof(arr[0]);
    positiveNot(arr, length);
    printf("Number of positive integers in this array is :%d", count);
    return 0;
}