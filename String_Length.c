#include <stdio.h>
#include <string.h>

int countLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}

int main()
{

    // char name[40];
    // fgets(name, 40, stdin);

    char name[] = "Sparsh";

    int len = strlen(name);
    printf("%d", len);

    // int len = countLength(name);
    // printf("%d", len);

    return 0;
}