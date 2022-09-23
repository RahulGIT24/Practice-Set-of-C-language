#include <stdio.h>

void sumAndavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}
int main()
{
    int a, b, sum;
    float avg;
    a = 9;
    b = 8;
    sumAndavg(a, b, &sum, &avg);
    printf("The sum of two numbers is %d\n", sum);
    printf("The average of two numbers is %.2f\n", avg);
    return 0;
}