#include <stdio.h>
#include <string.h>

void palindrome(char str[], int n){
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        if (str[start] != str[end])
        {
            printf("Not Palindrome");
            break;
        }
        
    }
    printf("Palindrome");
}

int main()
{

    char str[100];
    fgets(str, 100, stdin);

    int len = strlen(str);

    palindrome(str, len);

    return 0;
}