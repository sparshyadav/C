// Write a program to find the average of 3 numbers.
#include <stdio.h>

int main()
{

    int num1;
    printf("Enter the First Number: ");
    scanf("%d", &num1);

    int num2;
    printf("Enter the Second Number: ");
    scanf("%d", &num2);

    int num3;
    printf("Enter the ThirdNumber: ");
    scanf("%d", &num3);

    int average = (num1 + num2 + num3) / 3;

    printf("The Average is %d", average);

    return 0;
}