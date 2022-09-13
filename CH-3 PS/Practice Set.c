#include <stdio.h>
#include <ctype.h>
int main()
{
    //! Solution 1
    //* Returns I am 11 because single = is assignment operator
    int a = 90;
    if (a = 11)
        printf("I am 11");
    else
        printf("I am not 11");

    //! Solution 2
    int maths, science, hindi;
    float total;
    printf("Enter your marks in Maths\n");
    scanf("%d", &maths);
    printf("Enter your marks in Science\n");
    scanf("%d", &science);
    printf("Enter your marks in hindi\n");
    scanf("%d", &hindi);
    total = (maths + science + hindi) / 3;
    if ((total < 40) || maths < 33 || science < 33 || hindi < 33)
        printf("Your percentage is %f and you are Failed!\n", total);
    else
        printf("Your percentage is %f and you are Passed!\n", total);

    //! Solution 3
    float tax = 0, income;
    printf("Enter your income and I will tell your tax\n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.2 * (income - 500000);
    }
    if (income >= 1000000)
    {
        tax = tax + 0.03 * (income - 500000);
    }
    printf("Tax to pay %f\n", tax);

    //! Solution 4
    int year;
    printf("Enter a Year and I will tell you whether it is leap or not\n");
    scanf("%d", &year);
    if (year % 4 == 0)
        printf("%d is a leap year", year);
    else
        printf("%d is not a leap year", year);

    //! Solution 5
    char c;
    printf("Enter a Character\n");
    scanf("%c", &c);
    if (c >= 97 && c <= 122) //* According to ASCII Values 97 - 122 contains lowercase chracters a,b,c
        printf("Entered charcter is lowercase");
    else
        printf("Entered charcter is uppercase");

    //! Solution 6
    int num1, num2, num3, num4;
    printf("Enter first number\n");
    scanf("%d", &num1);
    printf("Enter second number\n");
    scanf("%d", &num2);
    printf("Enter third number\n");
    scanf("%d", &num3);
    printf("Enter fourth number\n");
    scanf("%d", &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
        printf("%d is Greatest", num1);
    else if (num2 > num1 && num2 > num3 && num2 > num4)
        printf("%d is Greatest", num2);
    else if (num3 > num1 && num3 > num2 && num3 > num4)
        printf("%d is Greatest", num3);
    else
        printf("%d is Greatest", num4);
    return 0;
}