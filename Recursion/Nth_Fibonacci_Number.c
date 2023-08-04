#include <stdio.h>

int fibonacci(int n)
{

    if (n == 1 || n == 2)
    {
        return 1;
    }

    int fibo = fibonacci(n - 1) + fibonacci(n - 2);
    return fibo;
}

int main()
{

    int n;
    printf("Enter The Nth Fibonacci Number: \n");
    scanf("%d", &n);

    int fib = fibonacci(n);
    printf("The Nth Fibonacci Term is: %d", fib);

    return 0;
}