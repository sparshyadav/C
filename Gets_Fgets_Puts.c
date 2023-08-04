#include <stdio.h>

int main()
{

    char name[40];
    // gets(name);
    // puts(name);

    fgets(name, 40, stdin);
    puts(name);

    return 0;
}