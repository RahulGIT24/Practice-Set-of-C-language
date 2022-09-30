#include <stdio.h>
typedef struct complex
{
    int real;
    int complex;
} comp;

void display(comp c)
{
    printf("Real value entered by the user %d\n", c.real);
    printf("Complex value entered by the user %d\n", c.complex);
}

int main()
{
    comp cnums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %d num\n", i + 1);
        scanf("%d", &cnums[0].real);

        printf("Enter the complex value for %d num\n", i + 1);
        scanf("%d", &cnums[0].complex);
    }
    for (int i = 0; i < 5; i++)
    {
        display(cnums[0]);
    }

    return 0;
}
