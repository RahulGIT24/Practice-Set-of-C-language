#include <stdio.h>

int fib(int);
int main()
{
    //* Fibonacci series example - 0+1+1+2+3+5
    int ask;
    printf("Enter a number\n");
    scanf("%d", &ask);
    if (ask < 0)
    {
        printf("A fibonacci number can't be negative");
    }
    else
    {
        printf("The %d number in fibonacci series is %d", ask, fib(ask));
    }

    return 0;
}

int fib(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else if (num == 0)
    {
        return 0;
    }
    else
    {
        return (fib(num - 1) + fib(num - 2));
    }
}
