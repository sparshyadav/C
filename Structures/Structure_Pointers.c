#include <stdio.h>
#include <string.h>

typedef struct emp
{
    int id;
    char name[30];
    int salary;
} emp;

int main()
{

    emp sparsh;
    sparsh.id = 123;
    strcpy(sparsh.name, "Sparsh Yadav");
    sparsh.salary = 12343;
    emp *x = &sparsh;

    (*x).salary = 5432;
    printf("%d \n", sparsh.salary);

    (*x).id = 12;
    printf("%d", sparsh.id);

    return 0;
}