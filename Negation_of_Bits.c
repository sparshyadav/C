// Write a program to negate every bits in a number.
#include <stdio.h>

int main()
{

    int num = 1;
    printf("Before Negation: %d \n", num);
    num = ~num;
    printf("After Negation: %d", num);

    return 0;
}