#include <stdio.h>

int main()
{

    int row;
    printf("Enter The Number of Rows: \n");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        int num = 1;
        for (int j = 1; j <= row - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", num);
            num++;
        }
        num--;
        for (int x = 1; x <= i - 1; x++)
        {
            num--;
            printf("%d", num);
        }
        printf("\n");
    }

    return 0;
}