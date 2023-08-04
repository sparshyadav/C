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

    struct Car mycar = {2000000, "Maruti", 2021};
    struct Car *carptr;
    carptr = &mycar;
    printf("%d \n", (*carptr).price);

    return 0;
}