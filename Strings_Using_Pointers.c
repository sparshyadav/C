#include <stdio.h>

int main()
{

    char *canchange = "Hello World";
    puts(canchange);
    canchange = "Hello";
    puts(canchange);

    char cannotchange[] = "Hello World";
    puts(cannotchange);

    return 0;
}