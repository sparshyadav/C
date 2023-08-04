#include <stdio.h>

int main()
{
    // char arr[10];
    // char arr2[5] = {'a', 'b', 'c', 'd', 'e'};
    // char arr3[3] = {"abc"};
    char arr4[8];
    printf("Enter the array values: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%s", &arr4[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%c", arr4[i]);
    }
}