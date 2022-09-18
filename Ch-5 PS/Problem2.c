#include <stdio.h>

float cel(float celcius);
int main()
{
    float celcius;
    printf("Enter a temperature in cecius\n");
    scanf("%f", &celcius);
    printf("The temperature in fraheinite is %.2f", cel(celcius));
    return 0;
}

float cel(float celcius)
{
    float frah = celcius * 1.8 + 32;
    return frah;
}