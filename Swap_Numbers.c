// Write a program to swap 2 numbers using just 2 variables
#include <stdio.h>

int main()
{

    int a;
    printf("Enter the First Value:");
    scanf("%d", &a);

    int b;
    printf("Enter the Second Value:");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d \n", a);
    printf("b = %d \n", b);

    return 0;
}