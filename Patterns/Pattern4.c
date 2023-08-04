#include <stdio.h>

int main()
{

    int row;
    printf("Enter The Number of Rows: \n");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}