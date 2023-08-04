#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    fgets(str, 100, stdin);
    printf("%s", str);

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("%s", str);

    return 0;
}