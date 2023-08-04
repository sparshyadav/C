#include <stdio.h>

int power(int n, int m)
{
    if (m == 0)
    {
        return 1;
    }

    if (m % 2 == 0)
    {
        return power(n, m / 2) * power(n, m / 2);
    }
    else
    {
        return power(n, m / 2) * power(n, m / 2) * n;
    }
}

int main()
{

    int n, m;
    printf("Enter The Value of A: \n");
    scanf("%d", &n);
    printf("Enter The Value of B: \n");
    scanf("%d", &m);

    int pow = power(n, m);
    printf("The Value of M Power N is: %d", pow);

    return 0;
}