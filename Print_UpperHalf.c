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
        for (int j = 0; j <= 5 - i; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("%d");
    }

    return 0;
}