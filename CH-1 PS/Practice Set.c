//! Write a program to add two numbers in C
#include <stdio.h>

//* Solution 1

int main()
{
    //* Using Hardcod inputs
    // int length = 23;
    // int breadth = 9;
    // int area = length * breadth;
    // printf("The area of rectangle is %d", area);
    //* By Taking inputs fram user
    int length ,breadth;
    printf("Enter the length of rectangle\n");
    scanf("%d", &length);
    printf("Enter the breadth of rectangle\n");
    scanf("%d", &breadth);
    int area = length*breadth;
    printf("The area of rectangle is %d",area);

    //* Solution 2
    int radius = 12;
    float pie = 3.14;
    int height = 13;
    printf("The area of circle is %f\n", pie * radius * radius);
    printf("The volume of cylinder is %f\n", pie * radius * radius * height);

    //* Solution 3
    float celcius = 90.6, far;
    far = (celcius*9/5)+32;
    printf("Converted temperatue is %f",far);

    //* Solution 4
    int principal = 90, rate = 10, time = 4;
    int simple_interest = (principal*rate*time)/100;
    printf("Simple interest is %d",simple_interest);
    return 0;
}
