#include <stdio.h>
int function()
{
    int m;
    scanf("%d", &m);
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += arr2[i];
    }
    if (sum % 2 == 0)
    {
        printf("E");
    }
    else
    {
        printf("O");
    }

    
}

int main()
{

    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int sum = function();
    printf("%d", sum);

    return 0;
}