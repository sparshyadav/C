#include <stdio.h>
int main()
{

    char path[6];
    printf("Enter the values:");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &path);
    }

    int x = 0;
    int y = 0;
    for (int i = 0; i < 6; i++)
    {
        if (path[i] == 'E')
        {
            x++;
        }
        if (path[i] == 'S')
        {
            y--;
        }
        if (path[i] == 'N')
        {
            y++;
        }
        if (path[i] == 'W')
        {
            x--;
        }
    }

    if (x > 0 && y > 0)
    {
        printf("North East");
    }
    else if (x < 0 && y > 0)
    {
        printf("North West");
    }
    else if (x > 0 && y < 0)
    {
        printf("South East");
    }
    else if (x < 0 && y < 0)  
    {
        printf("North West");
    }
    else if (x == 0)
    {
        printf("East");
    }
    else if (y == 0)
    {
        printf("North");
    }
    else if (x == 0 && y == 0)
    {
        printf("At the Origin");
    }

    return 0;
}