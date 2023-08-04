#include <stdio.h>

int main()
{

    int row;
    printf("Enter The Number of Rows: \n");
    scanf("%d", &row);

    int col;
    printf("Enter The Number of Columns: \n");
    scanf("%d", &col);

    int num = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
        num = 1;
    }

    return 0;
}