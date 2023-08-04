// Write a program to print inverted half pyramid pattern
#include <stdio.h>
int main()
{

    int row;
    printf("Enter the Number of Rows: ");
    scanf("%d", &row);

    int col=row;

    for (int i = 0; i < row; i++)
    {
        for (int j = col; j > 0; j--)
        {
            if(i==0 || j==col){
                printf("x");
            }
            else{
                printf(" ");
            }
        
        }
        col--;
        printf("\n");
    }

    return 0;
}