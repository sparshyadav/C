/*Write a program to print the following pattern
 *
 **
 ***
 ****
 *****
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
        printf("\n");
    }

    return 0;
}