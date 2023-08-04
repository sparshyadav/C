#include <stdio.h>
#include <string.h>

int main()
{

    char newStr[40] = "Hello";
    char oldStr[40] = "World";
    strcat(newStr, oldStr);
    puts(newStr);

    return 0;
}