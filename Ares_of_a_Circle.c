// Write a program to find the area of a circle.
#include <stdio.h>

int main()
{

    int rad;
    printf("Enter the Value of the Radius: \n");
    scanf("%d", &rad);

    float pie = 3.14;
    int area = pie * rad * rad;
    printf("The Area of the Circle is %d", area);

    return 0;
}