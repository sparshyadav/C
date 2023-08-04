#include <stdio.h>
int main()
{

    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[n][m]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[n][m];
        }
        printf("%d", sum);
    }

    return 0;
}