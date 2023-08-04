#include <stdio.h>

int main()
{

    int arr[3][3];

    printf("Enter the Values of 2D Arrays: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    int sumDiagonal1 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == i)
            {
                sumDiagonal1 += arr[i][j];
            }
        }
    }
    printf("sumDiagonal1: %d \n", sumDiagonal1);

    int sumDiagonal2 = 0;
    for (int i = 0; i <3; i++)
    {
        for (int j = 3; j > 0; j--)
        {
            if (i+j==2)
            {
                sumDiagonal2 += arr[i][j];
            }
        }
    }
    printf("sumDiagonal2: %d", sumDiagonal2);

    return 0;
}