#include <stdio.h>

void printArray(int arr[], int x)
{
    if (x > 0)
    {
        printf("%d ", arr[x - 1]);
        printArray(arr, x - 1);
    }
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

    printArray(arr, n);

    return 0;
}