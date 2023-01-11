// Write a program to check if the person is eligible for voting or not.
#include <stdio.h>

int main()
{

    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are Eligible for Voting.");
    }

    else
    {
        printf("You are not Eligible for Voting.");
    }

    return 0;
}