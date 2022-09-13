#include <stdio.h>

int main()
{
    //* Solution 1
    //! Valid condtion
    int a; int b=a;
    printf("The value of b is %d",b);

    //! Valid Condition
    int v = 3^3;
    printf("The value of v is %d",v);

    //! Invalid Condition
    // char dt = 'September 12 2022';
    // printf("The date is %c",dt);

    //* Solution 2
    float num1 = (3.0/8-2);
    printf("The number is %f",num1); //* Data type is Float

    //* Solution 3
    // if output is 0 then it is divisible by 97 
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("Divisibility test returns %d\n", num % 97);


    //* Solution 4
    int x = 2, y = 3, z = 3, k = 1;
    int result_1 = 3 + x / y * z + k;
    printf("Result after step by step calculation %d\n",result_1);

    //* Solution 5
    printf("Addition is %f",3.0+1); //! Data type is float
    return 0;
}