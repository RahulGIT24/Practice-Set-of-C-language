#include <stdio.h>

float average(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter 1st number\n");
    scanf("%d", &a);
    printf("Enter 2nd number\n");
    scanf("%d", &b);
    printf("Enter 3rd number\n");
    scanf("%d", &c);
    printf("The average is %f", average(a, b, c));
    return 0;
}

float average(int a, int b, int c)
{
    return (a + b + c) / 3;
}