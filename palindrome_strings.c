#include <stdio.h>
#include<string>

int main()
{

    char arr[1000];
    printf("Enter the array values: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%s", &arr[i]);
    // }
    scanf("%s", &arr);

    int length=strlen(arr4);
    int start = 0;
    int end = 4;
    int count = 0;

    while (start <= end)
    {
        if (arr[start] == arr[end])
        {
            continue;
            count++;
            start++;
            end--;
        }
        else
        {
            printf("Not Palindrome");
        }
    }
    if (count == 5)
    {
        printf("It is Palindrome");
    }

    return 0;
}