// Write a program to use every arithmetic operator.
#include <stdio.h>

int main()
{

    int a;
    printf("Enter the first Number: ");
    scanf("%d", &a);

    int b;
    printf("Enter the second Number: ");
    scanf("%d", &b);

    printf("a+b = %d \n", a + b);
    printf("a-b = %d \n", a - b);
    printf("a*b = %d \n", a * b);
    printf("a/b = %d \n", a / b);
    printf("a%b = %d \n", a % b);

    return 0;
}