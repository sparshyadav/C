#include <stdio.h>

int sum(int n);

int main()
{

    int s = sum(10);
    printf("The Sum is: %d", s);

    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumNminus1 = sum(n - 1);
    int sumN = sumNminus1 + n;
    return sumN;
}