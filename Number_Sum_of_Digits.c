// Write a program to find the sum of digits in number
#include <stdio.h>

int main()
{

    int a;
    printf("Enter the Value:");
    scanf("%d", &a);

    int sum = 0;
    while (a != 0)
    {
        sum = sum + a % 10;
        a = a / 10;
    }
    printf("The Sum of digits is: %d", sum);

    return 0;
}