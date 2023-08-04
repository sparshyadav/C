#include <stdio.h>
#include <string.h>
int main()
{
    char a[20] = "Program";
    char b[20] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};

    printf("Length of string a = %s \n", strlen(a));
    printf("Length of string b = %s \n", strlen(b));

    return 0;
}