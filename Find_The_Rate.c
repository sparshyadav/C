// Write a program to find the total price of the purchase when the quantity goies above 1000, then you get a 10%discount
#include <stdio.h>

int main()
{

    int rate1;
    printf("Enter the Price of Pens: ");
    scanf("%d", &rate1);

    int qty1;
    printf("Enter the Quantity of Pens: ");
    scanf("%d", &qty1);

    int rate2;
    printf("Enter the Price of Pencils: ");
    scanf("%d", &rate2);

    int qty2;
    printf("Enter the Quantity of Pencils: ");
    scanf("%d", &qty2);

    int total = (rate1 * qty1) + (rate2 * qty2);
    if (qty1 + qty2 >= 1000)
    {
        total = total - (total / 10);
    }

    printf("The Total Price is Rs. %d", total);

    return 0;
}