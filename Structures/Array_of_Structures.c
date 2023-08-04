#include <stdio.h>

typedef struct emp
{
    int empid;
    int empsal
} emp;

int main()
{

    emp arr[3];
    arr[0].empid = 1383;
    arr[0].empsal = 150000;
    arr[1].empid = 1421;
    arr[1].empsal = 200000;
    arr[2].empid = 1396;
    arr[2].empsal = 100000;

    for (int i = 0; i < 3; i++)
    {
        printf("ID of Employee is: %d \n", arr[i].empid);
        printf("Salary of Employee is: %d \n", arr[i].empsal);
    }

    return 0;
}