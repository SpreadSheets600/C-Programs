#include <stdio.h>
#include <string.h>

struct book // Defining A Structure Named Book
{
    char title[10];  // Declaring A Character Array Of Size 10 For Title
    char author[20]; // Each Struture Member Is Defined As : Data Type - Name - Size
    double price;
    int pages;
};

int main()
{
    struct book book1 = {"Learn C", "Dennis Ritchie", 675.50, 325}; // Initializing A Structure Variable book1 With Values

    printf("Title:  %s \n", book1.title); // Printing The Values Of The Structure Members
    printf("Author: %s \n", book1.author);
    printf("Price:  %lf\n", book1.price);
    printf("Pages:  %d \n", book1.pages);

    printf("Size of book struct: %d", sizeof(struct book)); // Printing The Size Of The Structure

    strcpy(book1.title, "Learn C"); // Using strcpy() To Copy A String To The Structure Member
    strcpy(book1.author, "Dennis Ritchie");
    book1.price = 675.50;
    book1.pages = 325;

    printf("Title: %s \n", book1.title);
    printf("Author: %s \n", book1.author);
    printf("Price: %lf \n", book1.price);
    printf("Pages: %d \n", book1.pages);

    return 0;
}