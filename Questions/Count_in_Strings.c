#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    fgets(str, 100, stdin);

    int vovels = 0;
    int consonant = 0;
    int digits = 0;
    int spaces = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            vovels++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            consonant++;
        }
        else if (str[i] == ' ')
        {
            spaces++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
    }

    printf("%d\n %d\n %d\n %d\n", vovels, consonant, digits, spaces);

    return 0;
}