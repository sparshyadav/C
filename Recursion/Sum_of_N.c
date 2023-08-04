#include <stdio.h>

int sum(int n)
{

    if (n == 0)
    {
        return 0;
    }

    int t = n + sum(n - 1);
    return t;
}

int main()
{

    int n;
    printf("Enter The Number: \n");
    scanf("%d", &n);

    int add = sum(n);
    printf("The Sum of N Natural Numbers is: %d", add);

    return 0;
}