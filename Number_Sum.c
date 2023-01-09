// Write a program to print the sum of two numbers.
#include<stdio.h>

int main(){
    int a;
    printf("Enter the Value of a: \n");
    scanf("%d", &a);

    int b;
    printf("Enter the Value of b: \n");
    scanf("%d", &b);

    int sum=a+b;
    printf("The Sum of both the Numbers is %d", sum);
    
    return 0;
}