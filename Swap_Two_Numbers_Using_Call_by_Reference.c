#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a and b are: %d %d \n", *a, *b);
}

int main()
{

    int num1 = 4; 
    int num2 = 5;
    swap(&num1, &num2);
    printf("Values of a and b are: %d %d\n", num1, num2);

    return 0;
}