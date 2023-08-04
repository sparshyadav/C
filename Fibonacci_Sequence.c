// Write a program to print the nth Fibonacci Number using recursive function.
#include <stdio.h>

int fibo(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }
    int fibn1 = fibo(n - 1);
    int fibn2 = fibo(n - 2);
    int fib = fibn1 + fibn2;
    return fib;
}

int main()
{

    printf("Nth Fibonacci: %d", fibo(6));

    return 0;
}
