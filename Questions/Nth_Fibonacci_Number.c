#include <stdio.h>

fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%d", fibo(n));

    return 0;
}