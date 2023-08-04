#include <stdio.h>
int main()
{
    // int a = 5;
    // int *ap;
    // ap = &a;
    // printf("Address using & operator %p \n", &a);
    // printf("Address from stroed pointer value %p \n");

    // printf("Size of variable a %d \n", sizeof(a));
    // printf("Size of pointer to variable a %d", sizeof(ap));

    char one = 'a';
    char *onep = &one;
    printf("%c\n", one);
    printf("%c\n", *onep);
    *onep = 'b';
    printf("%c\n", one);
    printf("%c\n", *onep);
}