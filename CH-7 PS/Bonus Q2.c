//* Write a function to calculate average of numbers in an array
#include <stdio.h>

float average(float *ptr, float len)
{
    float sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += *(ptr + i);
    }
    return sum / len;
}
int main()
{
    float array[] = {12, 56, 32, 89};
    float length = sizeof(array) / sizeof(array[0]);
    printf("%.2f", average(array, length));
    return 0;
}