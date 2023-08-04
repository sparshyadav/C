/* Write a program to print the following pattern.
*
**
***
****
*/
#include<stdio.h>

int main(){

    int num;
    printf("Enter the Value: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            printf("%c", '*');
        }
        printf("\n");
    }

    return 0;
}