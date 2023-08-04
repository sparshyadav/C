#include <stdio.h>

int main()
{

    int row;
    printf("Enter The Number of Rows: \n");
    scanf("%d", &row);

    int a;
    for (int i = 1; i <= row; i++)
    {
        if (i % 2 == 0)
        {
            a = 0;
        }
        else
        {
            a = 1;
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", a);
            if (a == 1)
            {
                a = 0;
            }
            else
            {
                a = 1;
            }
        }
        printf("\n");
    }

    return 0;
}