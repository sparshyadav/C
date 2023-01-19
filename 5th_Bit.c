// Write a program to check the nth it of the number in binary to see whether it's 0 or 1.
#include <stdio.h>

int main()
{

    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    int n;
    printf("Enter the Number n: ");
    scanf("%d", &n);

    if ((num >> n) & 1)
    {
        printf("True");
    }

    else
    {
        printf("False");
    }

    return 0;
}