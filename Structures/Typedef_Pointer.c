#include <stdio.h>

typedef int* pointer;

int main()
{

    int a = 2, b = 4;
    pointer x = &a, y = &b;

    printf("%p \n", x);
    printf("%p \n", y);

    return 0;
}