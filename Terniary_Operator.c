// Write a program to print the maximum of two numbers using terniary operators in a third variable.
#include <stdio.h>

int main()
{

    int a;
    printf("Enter the First Value: ");
    scanf("%d", &a);

    int b;
    printf("Enter the Second Value: ");
    scanf("%d", &b);

    int c = (a > b) ? a : b;

    printf("%d", c);

    return 0;
}