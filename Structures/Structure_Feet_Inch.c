#include<stdio.h>

typedef struct height{
    int feet;
    int inch;
}height;

height add(height a, height b){
    height c;
    c.feet=a.feet+b.feet;
    if((a.inch+b.inch)>12){
        c.feet++;
    }
}

int main(){



    return 0;
}