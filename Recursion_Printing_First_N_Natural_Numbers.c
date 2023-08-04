#include <stdio.h>

void print(int x)
{

    if (x > 0)
    {
        print(x - 1);
        printf("%d ", x);
    }
}

int main()
{

    int num;
    printf("Enter The Value: \n");
    scanf("%d", &num);

    print(num);

    return 0;
}