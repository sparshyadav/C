#include <stdio.h>
int main()
{

    int arr[5];
    // arr[0]=1;
    // arr[2]=2;
    // arr[1]=4;
    // arr[4]=7;
    // arr[3]=9;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}