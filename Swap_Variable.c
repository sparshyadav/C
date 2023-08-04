#include <stdio.h>
void swapbyvalue(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("The value of a and b are: %d %d \n", a, b);
}

void swap2(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
    // printf("The value of a and b are: %d %d \n", x, y);
}

int main()
{
    int a = 3;
    int b = 6;
    int *c = &a;
    int *d = &b;

    // printf("Values of a and be in main: %d %d \n", a, b);
    // swapbyvalue(a, b);
    // printf("Values of a and be in main: %d %d \n", a, b);

    printf("Values of a and be in main: %d %d \n", a, b);
    swap2(&a, &b);
    printf("After Swapping: %d %d\n", a, b);
    printf("Values of a and be in main: %d %d \n", a, b);

    // printf("Values of a and be in main: %d %d \n", a, b);

    return 0;
}