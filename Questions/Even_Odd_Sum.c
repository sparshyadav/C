#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int i = 1;
    int sumeven = 0;
    int sumodd = 0;
    while (n != 0)
    {
        int rem = n % 10;
        if (i % 2 == 1)
        {
            sumodd += rem;
        }
        else
        {
            sumeven += rem;
        }
        n = n / 10;
        i++;
    }

    printf("%d \n%d", sumodd, sumeven);

    return 0;
}