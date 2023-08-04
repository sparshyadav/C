#include <stdio.h>

typedef struct student
{
    int roll;
    int chem;
    int maths;
    int phy;
} student;

int percentage(student p)
{
    int percent = (p.chem + p.maths + p.phy) / 3;
    return percent;
}

int main()
{

    student sparsh = {1383, 76, 86, 86};
    student shreya = {1421, 76, 78, 98};

    int ans = percentage(sparsh);
    printf("The Percent of Sparsh is: %d", ans);

    return 0;
}