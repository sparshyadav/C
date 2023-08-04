#include<stdio.h>
#include<string.h>

int main(){

    char str1[100];
    char str2[100];
    fgets(str1, 100, stdin);
    fgets(str2, 100, stdin);

    int len1=strlen(str1);
    int len2=strlen(str2);

    char str3[200];

    for(int i=0; i<=len1+len2; i++){
        if(i%2==0){
            str3[i]=str1[0];
            
        }
    }

    return 0;
}