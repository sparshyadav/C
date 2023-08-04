#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("Patterns.c", "r");

    // if (fptr == NULL)
    // {
    //     printf("File Dosen't Exists");
    // }
    // else
    // {
    //     fclose(fptr);
    // }

    char ch;
    fscanf(fptr, "%c", &ch);

    return 0;
}