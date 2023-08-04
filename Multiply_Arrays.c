#include <stdio.h>
int main()
{
    int m;
    printf("Enter The Value: ");
    scanf("%d", &m);

    int arr[m];
    printf("Enter The Array Values: ");
    for (int i = 0; i < m; m++)
    {
        scanf("%d", &arr[i]);
    }

    int arr2[m];

    for (int i = 0; i < m; i++)
    {
        int product = 1;
        for (int j = 0; j < m; j++)
        {
            if (i == j)
            {
                product *= 1;
            }
            else
            {
                product *= arr[j];
            }
        }
        arr2[i] = product;
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d", arr2[i]);
    }

    return 0;
}