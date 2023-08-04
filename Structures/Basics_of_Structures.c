#include <stdio.h>

struct pokemon
{
    int hp;
    int speed;
    int attack;
    char grade;
};

int main()
{

    struct pokemon pikachu;
    // pikachu.hp = 80;
    // pikachu.attack = 90;
    // pikachu.speed = 60;
    pikachu.grade = 'A';
    printf("Enter Pikachu's HP: \n");
    scanf("%d", &pikachu.hp);
    printf("Enter Pikachu's Attack: \n");
    scanf("%d", &pikachu.attack);
    printf("Enter Pikachu's Grade: \n");
    scanf(" %c", &pikachu.grade);

    struct pokemon mewtwo;
    // mewtwo.hp = 90;
    // mewtwo.attack = 80;
    // mewtwo.speed = 70;
    // mewtwo.grade = 'G';
    printf("Enter MewTwo's HP: \n");
    scanf("%d", &mewtwo.hp);
    printf("Enter MewTwo's Attack: \n");
    scanf("%d", &mewtwo.attack);
    printf("Enter MewTwo's Grade: \n");
    scanf(" %c", &mewtwo.grade);

    printf("Pikachu's HP is: %d \n", pikachu.hp);
    printf("Pikachu's Attack is: %d \n", pikachu.attack);
    printf("Pikachu's Grade is: %c \n", pikachu.grade);
    printf("Mewtwo's HP is: %d \n", mewtwo.hp);
    printf("Mewtwo's Attack is: %d \n", mewtwo.attack);
    printf("Mewtwo's Grade is: %c \n", mewtwo.grade);

    return 0;
}