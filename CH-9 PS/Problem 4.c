#include <stdio.h>

typedef struct employee
{
    int code;
    int salary;
} emp;

int main()
{
    emp e1, e2;
    emp *ptr;
    ptr = &e1;
    // e1.code = 103;
    // e1.salary = 780000;
    // printf("The code of e1 is %d and salary is %d\n",e1.code,e1.salary);

    //* Use of arrow operator
    ptr->code = 12;
    ptr->salary = 120000;
    printf("The code of e1 is %d and salary is %d\n", e1.code, e1.salary);
    return 0;
}