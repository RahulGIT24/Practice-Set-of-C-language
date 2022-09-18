#include <stdio.h>
float massValue(float mass);
int main()
{
    float mass;
    printf("Enter the value of mass\n");
    scanf("%f", &mass);
    printf("The force of attrction will be %.2f", massValue(mass));
    return 0;
}

float massValue(float mass)
{
    float force = mass * 9.8;
    return force;
}