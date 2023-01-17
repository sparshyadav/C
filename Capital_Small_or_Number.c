// Write a program to check if the taken character is a capital input, small input, or a number.
#include <stdio.h>

int main()
{

    char ch;
    printf("Enter the Character: ");
    scanf("%d", &ch);

    if (ch > 'A' && ch < 'Z')
    {
        printf("The given character is a Capital Character");
    }
    else if (ch > 'a' && ch < 'z')
    {
        printf("The given character is a Small Character");
    }
    else
    {
        printf("The given character is a Number");
    }

    return 0;
}