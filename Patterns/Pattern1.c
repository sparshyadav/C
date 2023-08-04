#include <stdio.h>

int main()
{

    int row;
    printf("Enter The Number of Rows: \n");
    scanf("%d", &row);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}