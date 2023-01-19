// Write a program to the bit present on the nth place.
#include <stdio.h>

int main()
{

    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    int n;
    printf("Enter the Number n: ");
    scanf("%d", &n);

    if ((num >> n) & 1)
    {
        n = ~n;
    }

    return 0;
}