#include <stdio.h>
int main()
{

    int arr[] = {5, 3, 6, 8, 2, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}