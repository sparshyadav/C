#include <stdio.h>

void square(int* n)
{
    *n = (*n) * (*n);
    printf("%d\n", *n);
}

int main()
{

    int number = 4;
    square(&number);
    printf("%d\n", number);

    return 0;
}