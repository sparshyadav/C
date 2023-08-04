// Write a program to check if the student is passed or failed.
#include <stdio.h>

int main()
{

    int marks;
    printf("Enter Your Marks: ");
    scanf("%d", &marks);

    if (marks >= 30)
    {
        printf("You are Pass.");
    }
    else
    {
        printf("You are Fail.");
    }

    return 0;
}