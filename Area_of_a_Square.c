// Write a program to find the area of a square.
#include <stdio.h>

int main()
{

    int side;
    printf("Enter the Value of the Side: \n");
    scanf("%d", &side);

    int area = side * side;
    printf("The Area of the Square is %d", area);

    return 0;
}