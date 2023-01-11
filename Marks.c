// Write a program to print the grades of a student according to their marks.
#include <stdio.h>

int main()
{

    int marks;
    printf("Enter Your Makrks: ");
    scanf("%d", &marks);

    if (marks >= 80)
    {
        printf("Grade A");
    }
    else if (marks < 80 && marks >= 65)
    {
        printf("Grade B");
    }
    else if (marks < 65 && marks >= 45)
    {
        printf("Grade C");
    }
    else if (marks < 45 && marks >= 30)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}