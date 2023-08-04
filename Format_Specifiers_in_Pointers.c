#include <stdio.h>

int main()
{
    int age = 20;
    int *ptr = &age;

    printf("%p\n", &age);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);

    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    return 0;
}