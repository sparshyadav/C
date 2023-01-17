// Write a program to check according to time whether sujal will study or not.
#include <stdio.h>

int main()
{

    int time;
    printf("Enter the time Sujal has: ");
    scanf("%d", time);

    if (time > 120)
    {
        printf("Sujal will Study");
    }
    else if (time > 60 && time < 120)
    {
        printf("Sujal will read books");
    }
    else
    {
        printf("Sujal will watch THE OFFICE");
    }

    return 0;
}