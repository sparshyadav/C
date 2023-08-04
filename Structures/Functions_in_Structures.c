#include <stdio.h>

typedef struct pokemon
{
    int hp;
    int attack;
} pokemon;

void print(pokemon p)
{
    printf("After Passing in The Function: %d \n", p.hp);
}

void change(pokemon q)
{
    q.hp = 100;
    q.attack = 80;
    printf("The HP after function is: %d \n", q.hp);
    printf("The Attack after function is: %d \n", q.attack);
}

int main()
{

    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.attack = 70;
    printf("Before Passing in The Function: %d \n", pikachu.hp);
    printf("Before Passing in The Function: %d \n", pikachu.attack);
    // print(pikachu);
    change(pikachu);

    return 0;
}