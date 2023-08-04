#include <stdio.h>
#include <string.h>

struct Car
{
    int price;
    char Model[100];
    int year;
};

int main()
{

    struct Car cars[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &cars[i].price);
        scanf("%s", &cars[i].Model);
        scanf("%d", &cars[i].year);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", cars[i].price);
        printf("%s \n", cars[i].Model);
        printf("%d \n", cars[i].year);
    }

    return 0;
}