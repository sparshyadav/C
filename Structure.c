#include <stdio.h>
#include <string.h>

struct student
{

    int roll_no;
    char name[100];
    int marks;
};

int main()
{

    struct student Rajesh;
    Rajesh.roll_no = 100;
    Rajesh.marks = 80;

    strcpy(Rajesh.name, "Rajesh Kumar");

    printf("Marks of Rajesh: %d\n", Rajesh.marks);
    printf("Roll Number of Rajesh: %d\n", Rajesh.roll_no);
    printf("Full Name of Rajesh is: %s\n", Rajesh.name);

    struct student Sparsh = {83, "Sparsh Yadav", 99};
    printf("Marks of Sparsh: %d\n", Sparsh.marks);
    printf("Roll Number of Sparsh: %d\n", Sparsh.roll_no);
    printf("Full Name of Sparsh is: %s\n", Sparsh.name);

    struct student Sujal = {.roll_no = 96, .name = "Sujal Gupta"};
    printf("Marks of Sujal: %d\n", Sujal.marks);
    printf("Roll Number of Sujal: %d\n", Sujal.roll_no);
    printf("Full Name of Sujal is: %s\n", Sujal.name);

    return 0;
}