#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[min])
        {
            min = i;
        }
    }

    printf("%d", arr[min]);

    return 0;
}