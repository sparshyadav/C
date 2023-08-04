#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[40];
    int roll;
    int age;
    int marks;
} student;

int main()
{

    student sparsh = {"Sparsh Yadav", 1383, 20, 80};
    student shreya = {"Sweta Shreya", 1421, 19, 90};

    printf("Name of First Student is: %s \n", sparsh.name);
    printf("Roll Number of First Student is: %d \n", sparsh.roll);
    printf("Age of First Student is: %d \n", sparsh.age);
    printf("Marks of First Student is: %d \n", sparsh.marks);

    printf("Name of Second Student is: %s \n", shreya.name);
    printf("Roll Number of Second Student is: %d \n", shreya.roll);
    printf("Age of Second Student is: %d \n", shreya.age);
    printf("Marks of Second Student is: %d \n", shreya.marks);

    return 0;
}