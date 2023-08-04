#include <stdio.h>
int main()
{

    int arr[] = {3, 2, 1, 5, 6, 7, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1 - i; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}