#include <stdio.h>
struct date
{
    int date;
    int month;
    int year;
};

void display(struct date d)
{
    printf("Date- %d/%d/%d\n", d.date, d.month, d.year);
}

int comparison(struct date d1, struct date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }
    return 0;
}

int main()
{
    struct date d1, d2;

    d1.date = 30;
    d1.month = 9;
    d1.year = 2023;

    d2.date = 31;
    d2.month = 9;
    d2.year = 2022;
    display(d1);
    display(d2);
    int compareFunc = comparison(d1, d2);
    if (compareFunc == 0)
    {
        printf("Date is equal");
    }
    else if (compareFunc == 1)
    {
        printf("Date 1 is graeter than date 2");
    }
    else
    {
        printf("Date 2 is graeter than date 1");
    }

    return 0;
}