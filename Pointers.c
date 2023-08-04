#include <stdio.h>

int main()
{

    int age = 20;
    int *ptr = &age;
    int _age = *ptr;

    printf("Age is: %d\n", age);
    printf("Value stored in ptr: %d\n", ptr);
    printf("Value stored in the address stored in ptr: %d\n", *ptr);
    printf("Value in _age: %d\n", _age);

    return 0;
}