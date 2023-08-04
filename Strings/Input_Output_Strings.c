#include <stdio.h>
// #include <string.h>

int main()
{

    // char str[] = {"Sparsh Yadav will nail Microsoft"};
    // printf("%s \n", str);
    // puts(str);

    char str[50];
    printf("Enter Your Name: \n");
    scanf("%[^\n]s", str);
    printf("The Input is: \n");
    printf("%s", str);

    return 0;
}