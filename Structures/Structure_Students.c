#include <stdio.h>
#include <string.h>

typedef struct student
{
    int roll;
    char name[50];
    int age;
} student;

int main()
{

    student arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Your Roll Number: \n");
        scanf("%d", &arr[i].roll);
        printf("Enter Your Name: \n");
        scanf("%s", &arr[i].name);
        printf("Enter Your Age: \n");
        scanf("%d", &arr[i].age);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Roll Number of Student is: %d \n", arr[i].roll);
        printf("Name of Student is: %s \n", arr[i].name);
        printf("Age of Student is: %d \n", arr[i].age);
    }

    return 0;
}