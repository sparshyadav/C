// Write a program to find whether a point is inside a circle or not.
#include <stdio.h>
#include <math.h>

int main()
{

    float circX;
    printf("Enter the X axis Value of the Center of Circle: ");
    scanf("%f", &circX);

    float circY;
    printf("Enter the Y axis Value of the Center of Circle: ");
    scanf("%f", &circY);

    float radius;
    printf("Enter the Radius of the Circle: ");
    scanf("%f", &radius);

    float pointX;
    printf("Enter the X axis Value of the Point: ");
    scanf("%f", &pointX);

    float pointY;
    printf("Enter the Y axis Value of the Point: ");
    scanf("%f", &pointY);

    float distance = (sqrt((circX - pointX) * (circX - pointX)) + ((circY - pointY) * (circY - pointY)));

    if (distance < radius)
    {
        printf("The Point is inside the Circle \n");
    }
    else if (distance = radius)
    {
        printf("The Point is on the Circle \n");
    }
    else
    {
        printf("The Point is outside the Circle \n");
    }

    return 0;
}