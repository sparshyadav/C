#include<stdio.h>
int main(){

    int arr[10];
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the Key: \n");
    scanf("%d", &key);
    // int count=0;

    for(int i=0; i<10; i++){
        if(arr[i]==key){
            printf("%d", i);
            // count++;
        }
    }

    return 0;
}