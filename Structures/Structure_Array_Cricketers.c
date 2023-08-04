#include <stdio.h>
#include <string.h>

typedef struct cricketer
{
    char name[50];
    int age;
    int matches;
    int average;
} cric;

int main()
{

    cric arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter The Name of The Cricketer: \n");
        // scanf(" %[^\n]s", &arr[i].name);
        fgets(arr[i].name, 50, stdin);
        printf("Enter The Age of The Cricketer: \n");
        scanf("%d", &arr[i].age);
        printf("Enter The Matches of The Cricketer: \n");
        scanf("%d", &arr[i].matches);
        printf("Enter The Average of The Cricketer: \n");
        scanf("%d", &arr[i].average);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Name of The Cricketer: %s \n", arr[i].name);
        printf("Age of The Cricketer: %d \n", arr[i].age);
        printf("Matches of The Cricketer: %d \n", arr[i].matches);
        printf("Average of The Cricketer: %d \n", arr[i].average);
    }

    return 0;
}