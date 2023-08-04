#include <stdio.h>

void Namaste();
void Bounjour();

int main()
{

    printf("Enter F for French, and H for Hindi: ");
    char ch;
    scanf("%c", &ch);

    if (ch == 'F')
    {
        Bounjour();
    }
    else
    {
        Namaste();
    }

    return 0;
}

void Namaste()
{
    printf("Namaste\n");
}

void Bounjour()
{
    printf("Bounjour\n");
}