#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct date
{
    int date;
    int month;
    int year;
} date;

int main()
{

    date d1;
    date d2;
    date d3;

    d1.date = 18;
    d1.month = 8;
    d1.year = 2002;

    d2.date = 12;
    d2.month = 5;
    d2.year = 2003;

    d1 = d3;

    bool flag = true;
    if (d1.date == d3.date)
    {
        flag = false;
    }
    if (d1.month == d3.month)
    {
        flag = false;
    }
    if (d1.year == d3.year)
    {
        flag = false;
    }

    if (flag == false)
    {
        printf("The Structures are same");
    }
    else
    {
        printf("The Structures are different");
    }

    return 0;
}