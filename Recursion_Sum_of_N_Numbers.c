#include <stdio.h>

int sum(int x)
{
    if (x == 1)
    {
        return 1;
    }
    if (x == 0)
    {
        return 0;
    }
    int add = x + sum(x - 1);
    return add;
}

int main()
{

    int num = 5;
    int ans = sum(num);
    printf("%d", ans);

    return 0;
}