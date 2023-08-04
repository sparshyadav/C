#include <stdio.h>

int main()
{

    int row;
    printf("Enter The Number of Rows: \n");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        int num = 1;
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c", ch);
                ch++;
            }
            else
            {
                printf("%d", num);
                num++;
            }
        }
        printf("\n");
    }

    return 0;
}