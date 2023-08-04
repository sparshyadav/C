#include <stdio.h>

int sum(int num1, int num2);

int main()
{

    int num1;
    printf("Enter the First Number: ");
    scanf("%d", &num1);

    int num2;
    printf("Enter the Second Number: ");
    scanf("%d", &num2);

    int add = sum(num1, num2);
    printf("The Sum is: %d", add);

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}