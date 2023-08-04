#include <stdio.h>
int giveme10()
{
    printf("Function Printing %d", 10);
    return 10;
}

int main()
{
    giveme10();
    int result = giveme10();
    printf("Result is %d", result);
    ;
}