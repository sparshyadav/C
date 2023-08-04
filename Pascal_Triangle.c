#include <stdio.h>

int ncr(int n, int r)
{
    if (r == 0 || r == n)
    {
        return 1;
    }

    return ncr(n - 1, r) + ncr(n - 1, r - 1);
}

int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", ncr(i, j));
        }
        printf("\n");
    }

    return 0;
}
