#include <stdio.h>
int main()
{

    int arr[6] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 6; i++)
    {
        for (int j = i; j < 6; j++)
        {
            for (int k = i; k <= j; k++)
            {
                printf("%d", arr[k]);
            }
            printf("\n");
        }
    }

    return 0;
}