#include <stdio.h>

void print(int i, int n)
{
    if (i > n)
    {
        return;
    }
    for (int j = 0; j < i; j++)
    {
        printf(" * ");
    }
    printf("\n");
    print(i + 1, n);
}

int main()
{

    print(1, 5);

    return 0;
}