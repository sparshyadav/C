#include <stdio.h>

int size(char *arr)
{
    int i = 0;
    while (arr[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{

    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    int length = size(arr);
    printf("The length is: %d", length);

    return 0;
}