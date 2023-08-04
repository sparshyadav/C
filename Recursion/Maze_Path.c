#include <stdio.h>

int ways(int cr, int cc, int er, int ec)
{

    int right = 0;
    int down = 0;
    if (cr == er && cc == ec)
    {
        return 1;
    }
    if (cr == er)
    {
        right = maze(cc, cr + 1, er, ec);
    }
    if (cc == ec)
    {
        down = maze(cr + 1, cc, er, ec);
    }

    int total = right + down;
    return total;
}

int main()
{

    int n, m;
    printf("Enter The Number of Rows: \n");
    scanf("%d", &n);
    printf("Enter The Number of Columns: \n");
    scanf("%d", &m);

    int ways = maze(1, 1, n, m);
    printf("The Total Number of Ways are: %d", ways);

    return 0;
}