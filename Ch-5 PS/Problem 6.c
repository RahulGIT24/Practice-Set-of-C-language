#include <stdio.h>

int add(int number);
int main()
{
    int a = 10;
    printf("The sum of first %d natural numbers is %d", a, add(a));
    return 0;
}

int add(int number)
{
    if (number == 1)
    {
        return 1;
    }
    else if (number==0)
    {
        return 0;
    }
    else
    {
        return number + add(number - 1);
    }
}