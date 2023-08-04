#include <stdio.h>

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");
}

int main()
{

    char name[] = {'S', 'P', 'A', 'R', 'S', 'H', '\0'};
    char name2[] = {"SPARSH"};
    char class[] = {'B', 'E', 'C', 'S', 'E', '\0'};
    char class2[] = {"BECSE"};
    printString(name);
    printString(name2);
    printString(class);
    printString(class2);

    return 0;
}