#include <stdio.h>

int factorial(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    int fact = x * factorial(x - 1);
    return fact;
}

int main()
{

    int num = 5;
    int ans = factorial(num);
    printf("%d", ans);

    return 0;
}