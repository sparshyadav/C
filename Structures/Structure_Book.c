#include <stdio.h>
#include <strings.h>

struct book
{
    char name[50];
    int price;
    int pages;
} book1, book2;

int main()
{

    strcpy(book1.name, "Atomic Habits");
    book1.price = 250;
    book1.pages = 233;

    strcpy(book2.name, "The Subtle Art of Not Giving A Fuck");
    book2.price = 400;
    book2.pages = 250;

    printf("Name of the Book 1 is: %s \n", book1.name);
    printf("Price of The Book 1 is: %d \n", book1.price);
    printf("Number of Pages in The Book 1 is: %d \n", book1.pages);

    printf("Name of the Book 2 is: %s \n", book2.name);
    printf("Price of The Book 2 is: %d \n", book2.price);
    printf("Number of Pages in The Book 2 is: %d \n", book2.pages);

    return 0;
}