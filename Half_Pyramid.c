// Write a program to print half pyramid pattern
#include <stdio.h>
int main()
{

    int row;
    printf("Enter the Number of Rows: ");
    scanf("%d", &row);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("x");
        }
        printf("\n");
    }

    return 0;
}