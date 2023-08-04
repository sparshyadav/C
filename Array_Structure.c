#include <stdio.h>
#include <string.h>

struct Array
{
    int arr[100];
    int s;
};

void increaseArray(struct Array a)
{
    a.arr[0] += 5;
    a.arr[1] += 5;
    a.arr[2] += 5;
    a.arr[3] += 5;
    a.arr[4] += 5;
}

int main()
{

    struct Array alist;
    alist.arr[0] = 1;
    alist.arr[1] = 2;
    alist.arr[2] = 3;
    alist.arr[3] = 4;
    alist.arr[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", alist.arr[i]);
    }

    return 0;
}