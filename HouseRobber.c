#include <stdio.h>

int rob(int *arr, int n, int i, int robbed)
{
    if (i >= n)
    {
        return 0;
    }
    int loot = 0;
    int leave = 0;
    if (!robbed)
    {
        loot = arr[i] + rob(arr, n, i + 1, 1);
        leave = rob(arr, n, i + 1, 0);
    }
    else
    {
        leave = rob(arr, n, i + 1, 0);
    }
    return loot > leave ? loot : leave;
}

int main()
{
    int arr[] = {2, 4, 9, 1, 7, 11};
    printf("Max Profit is: %d", rob(arr, 6, 0, 0));
}