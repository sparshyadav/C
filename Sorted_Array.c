#include<stdio.h>

int sorted(int *arr, int n, int idx){
    if(sizeof(arr)/sizeof(arr[0])){
        return 1;
    }
    int nextsorted=sorted(arr, n, idx+1);
    if(arr[idx]<=arr[idx+1]){

    }
}

int main(){

    int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 19};
    printf("%d ", sorted(arr, 10, 0));

    return 0;
}