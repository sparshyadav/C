// Write a program to print the table of a number.
#include <stdio.h>

int main()
{

    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", num, i, i * num);
    }

    return 0;
}