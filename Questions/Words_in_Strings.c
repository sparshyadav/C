#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    int count = 0;

    fgets(str, 100, stdin);

    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    printf("The length is %d", count + 1);

    return 0;
}