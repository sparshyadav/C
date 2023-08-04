#include <stdio.h>

int rotate(int *x, int *y, int *z)
{
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

int main()
{
    int a = 1;
    int b = 4;
    int c = 5;

    printf("Values of a, b, and c in main: %d %d %d \n", a, b, c);
    rotate(&a, &b, &c);
    printf("After rotating: %d %d %d \n", a, b, c);
    printf("Values of a, b, and c in main: %d %d %d \n", a, b, c);

    return 0;
}