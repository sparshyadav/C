#include<stdio.h>

int sort(int a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp; 
            }
        }
    }
}

int main(){

    int arr[6]={42, 64, 23, 84, 21, 86};
    sort(arr, 6);
    for(int i=0; i<6; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}