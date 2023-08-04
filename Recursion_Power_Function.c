#include <stdio.h>

int power(int x, int y)
{
    // if (y == 0)
    // {
    //     return 1;
    // }

    // int pow = x * power(x, y - 1);
    // return pow;

    if (y == 0)
    {
        return 1;
    }
    int pow;
    if (y % 2 == 0)
    {
        return power(x * x, y / 2);
    }
    else
    {
        return x * power(x * x, (y - 1) / 2);
    }
}

int main()
{

    int ans = power(3, 3);
    printf("%d", ans);

    return 0;
}