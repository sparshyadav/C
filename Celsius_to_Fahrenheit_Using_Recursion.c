#include <stdio.h>

float conversion(float cel);

int main()
{

    float far = conversion(0);
    printf("Farenheit: %f", far);

    return 0;
}

float conversion(float cel)
{
    float far = cel * (9.0 / 5.0) + 32;
    return far;
}