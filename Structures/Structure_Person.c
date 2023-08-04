#include <stdio.h>
#include <string.h>

typedef struct person
{
    char name[50];
    int age;
    int salary;
} person;

int main()
{
    person p1;
    person p2;
    
    strcpy(p1.name, "Sparsh Yadav");
    p2.age = 23;
    p1.salary = 150000;

    printf("The Name of First Person is: %s \n", p1.name);
    printf("The Age of Second Person is: %d \n", p2.age);
    printf("The Salary of First Person is: %d \n", p1.salary);

    return 0;
}