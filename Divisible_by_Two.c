// Write a program to check if a numebr is divisible by 2 or not.
#include <stdio.h>

int main()
{

    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The Number is divisible by 2");
    }
    else
    {
        printf("The Number is not divisible by 2");
    }

    return 0;
}