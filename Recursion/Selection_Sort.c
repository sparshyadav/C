#include <stdio.h>

void sort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(&arr[i], arr[min]);
    }
}

void recursion(int *arr, int i, int n)
{
    if (i == n)
    {
        return;
    }
    int min = i;
    for (int j = i + 1; j < n; j++)
    {
        if (arr[j] < arr[min])
        {
            min = j;
        }
    }
    swap(&arr[i], arr[min]);
    recursion(arr, i + 1, n);
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{

    int arr[5] = {5, 4, 3, 2, 1};
    recursion(arr, 0, 5);
    print(arr, 5);

    return 0;
}