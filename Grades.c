// Write a program to give grade to the sudent depending on their marks.
#include <stdio.h>

int main()
{

    int marks;
    printf("Enter Your Marks: ");
    scanf("%d", &marks);

    if (marks < 30)
    {
        printf("Grade C");
    }
    else if (marks >= 30 && marks < 70)
    {
        printf("Grade B");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("Grade A");
    }
    else
    {
        printf("Grade A+");
    }

    return 0;
}