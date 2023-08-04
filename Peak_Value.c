#include <stdio.h>
int main()
{
    int arr[] = {1, 5, 6, 9, 7, 2, 4, 3, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}