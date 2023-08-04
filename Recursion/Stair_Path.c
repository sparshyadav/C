#include <stdio.h>

int stair(int n)
{

    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    if (n == 3)
    {
        return 3;
    }

    int total = stair(n - 1) + stair(n - 2) + stair(n - 3);
    return total;
}

int main()
{

    int n;
    printf("Enter a Number: \n");
    scanf("%d", &n);

    int ways = stair(n);
    printf("%d", ways);

    return 0;
}