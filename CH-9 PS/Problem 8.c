#include <stdio.h>

typedef struct bankDetails
{
    int accountNo;
    int balance;
    int phoneNumber;
    char name[45];
} bank;

int main()
{
    bank rahul = {559108790, 250000, 91000234, "Rahul"};
    printf("Name of User %s\n", rahul.name);
    printf("Account Number of Rahul %d\n", rahul.accountNo);
    printf("Bank Balance of Rahul %d\n", rahul.balance);
    printf("Phone Number of Rahul %d\n", rahul.phoneNumber);

    printf("*************************************************************");

    bank rohan = {55918760, 150000, 9103434, "rohan"};
    printf("Name of User %s\n", rohan.name);
    printf("Account Number of rohan %d\n", rohan.accountNo);
    printf("Bank Balance of rohan %d\n", rohan.balance);
    printf("Phone Number of rohan %d\n", rohan.phoneNumber);
    return 0;
}