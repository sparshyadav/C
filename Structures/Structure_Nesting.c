#include <stdio.h>

typedef struct cars
{
    int bhp;
    int speed;
} cars;

typedef struct luxury
{
    cars normal;
    int price;
} luxury;

typedef struct sports
{
    luxury normal;
    int topspeed;
} sports;

int main()
{
    cars mahindra;
    mahindra.bhp = 2000;

    luxury bmw;
    bmw.normal.speed = 220;

    sports ferrari;
    ferrari.normal.normal.speed = 480;

    printf("The Top Speed of Ferrair is: %d", ferrari.normal.normal.speed);

    return 0;
}