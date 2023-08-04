#include <stdio.h>

int factorial(int n)
{
    if (n == 1 || n==0) // base case
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Enter The Number: \n");
    scanf("%d", &n);

    int fact = factorial(n);
    printf("The Factorial of %d is : %d \n", n, fact);
}