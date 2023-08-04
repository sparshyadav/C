#include <stdio.h>
int main()
{

    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count0 = 0;
    int count1 = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        if (arr[i] == 1)
        {
            count1++;
        }
    }

    int i = 0;
    while (count0--)
    {
        arr[i] = 0;
    }
    while (count1--)
    {
        arr[i] = 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}