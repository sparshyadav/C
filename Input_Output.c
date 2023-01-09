// This program show how input output is taken and printed in C.
#include <stdio.h>

int main()
{
    printf("Hello World! \n");

    printf("Hello\nWorld ");

    int aged = 22;
    printf("Age is %d \n", aged);

    float pi = 3.14;
    printf("Value is pi is %f \n", pi);

    char star = '*';
    printf("A star looks like %c \n", star);

    int age;
    printf("Enter Age: \n");
    scanf("%d", &age);
    printf("The age is: %d ",age);

    return 0;
}