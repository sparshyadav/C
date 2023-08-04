#include<stdio.h>
int main(){

    int n=5;
    int sp=0; 
    int st=n;

    for(int i=1; i<=n; i++){
        for(int j=0; j<sp; j++){
            printf(" ");
        }
        for(int j=0; j<st; j++){
            printf("*");
        }
        if(i<(n+1)/2){
            sp=sp+1;
            st=st-1;
        }
        else{
            sp=sp-1;
            st=st+2;
        }
        printf("\n");
    }

    return 0;
}