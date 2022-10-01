#include <stdio.h>
#include <string.h>
typedef struct employee
{
    char name[45];
    int salary;
} emp;

int main()
{
    emp e1, e2;
    printf("Enter the name of first employee\n");
    scanf("%s", e1.name);
    printf("Enter the salary of %s\n", e1.name);
    scanf("%d", &e1.salary);

    printf("Enter the name of second employee\n");
    scanf("%s", e2.name);
    printf("Enter the salary of %s\n", e1.name);
    scanf("%d", &e2.salary);

    FILE *ptr;
    ptr = fopen("Employee data.txt", "w");
    fprintf(ptr, "%s, %d\n", e1.name, e1.salary);
    fprintf(ptr, "%s, %d", e2.name, e2.salary);
    fclose(ptr);

    printf("Employee data stored successfully");
    return 0;
}