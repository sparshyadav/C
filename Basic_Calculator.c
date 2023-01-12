// Write the program of a basic calculator.
#include <stdio.h>

int main()
{

    char operation;
    printf("Enter the Character: ");
    scanf("%c", &operation);

    int a;
    printf("Enter First Value: ");
    scanf("%d", &a);

    int b;
    printf("Enter Second Value: ");
    scanf("%d", &b);

    switch (operation)
    {
    case '+':
        printf("a + b = %d", a + b);
        break;

    case '-':
        printf("a - b = %d", a - b);
        break;

    case '*':
        printf("a * b = %d", a * b);
        break;

    case '/':
        printf("a / b = %d", a / b);
        break;

    default:
        break;
    }

    return 0;
}