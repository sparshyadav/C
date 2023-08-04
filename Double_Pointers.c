// C program to demonstrate pointer to pointer
#include <stdio.h>

int main()
{
    int var = 123;
    int *ptr2 = &var;
    int **ptr1 = &ptr2;

    printf("Value of var = %d\n", var);
    printf("Value of var using single pointer = %d\n", *ptr2);
    printf("Value of var using double pointer = %d\n", **ptr1);

    return 0;
}
