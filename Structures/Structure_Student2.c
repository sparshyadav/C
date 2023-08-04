#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct student
{
    int roll;
    char name[50];
    char dept[20];
    char course[20];
    int year;
} student;

void samedept(student s, student y)
{
    if (s.dept == y.dept)
    {
        printf("Both The Department are Same");
    }
    else
    {
        printf("The Department are not Same");
    }
}

int main()
{

    student sparsh = {1383, "Sparsh Yadav", "CSE", "BE", 2021};
    student shreya = {1383, "Sweta Shreya", "CSE", "BE", 2021};

    samedept(sparsh, shreya);

    return 0;
}