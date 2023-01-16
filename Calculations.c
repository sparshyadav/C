#include <stdio.h>

int main()
{

    int a;
    printf("Enter the First Value:");
    scanf("%d", &a);

    int b;
    printf("Enter the Second Value:");
    scanf("%d", &b);

    int c;
    printf("Enter the Third Value:");
    scanf("%d", &c);

    int d;
    printf("Enter the Fourth Value:");
    scanf("%d", &d);

    int e;
    printf("Enter the fifth Value:");
    scanf("%d", &e);

    int f;
    printf("Enter the Sixth Value:");
    scanf("%d", &f);

    printf("%d \n", ((a + b) * (c + d)));
    printf("%d \n", (a + b) / (c + d));
    printf("%d \n", (2 * a * a) + (3 * b) + 5);
    printf("%d \n", ((2 * a * b) / (c * d)) - ((3 * e) / (4 * f * f)));

    return 0;
}