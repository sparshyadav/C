#include <stdio.h>

int digits(int num)
{
    if (num / 10 == 0)
    {
        return 1;
    }
    return 1 + digits(num / 10);
}

int main()
{

    int number;
    printf("Enter the Number: \n");
    scanf("%d", &number);

    int ans = digits(number);
    printf("%d", ans);

    return 0;
}