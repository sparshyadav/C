#include <stdio.h>

int main()
{

    int row;
    printf("Enter The Number of Rows: \n");
    scanf("%d", &row);

    int num = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row + 1 - i; j++)
        {
            printf("%d", num);
            num++;
        }
        printf("\n");
        num = 1;
    }

    return 0;
}