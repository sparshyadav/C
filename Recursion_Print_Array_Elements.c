#include <stdio.h>

int printArray(int arr[], int start, int len)
{
    if (start >= len)
    {
        return 0;
    }
    printf("%d", arr[start]);
    printArray(arr, start + 1, len);
}

int main()
{

    int n;
    printf("Enter The Number of Array Elements: \n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printArray(arr, 0, n);

    return 0;
}