// Write a program to print solid rectange pattern
#include <stdio.h>

int main()
{

    int row;
    printf("Enter the Number of Rows: ");
    scanf("%d", &row);

    int col;
    printf("Enter the Number of Columns: ");
    scanf("%d", &col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("x");
        }
        printf("\n");
    }

    return 0;
}