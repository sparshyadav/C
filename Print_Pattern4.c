/*Write a program to print the following pattern
   *
  ***
 *****
  ***
   *
 */
#include <stdio.h>

int main()
{

    int num;
    printf("Enter the Value: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%c", '*');
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
    for (int i = 1; i < num - 1; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%c", '*');
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }

    return 0;
}