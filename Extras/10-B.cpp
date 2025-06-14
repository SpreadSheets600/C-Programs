#include <stdio.h>
#include <string.h>

struct Book
{
    char name[100];
    char author[100];
    char publisher[100];
    float price;
};

int main()
{
    int MAX = 10;
    struct Book books[MAX];

    printf("Enter Deatils For 10 Books : \n");
    for (int i = 0; i < MAX; i++)
    {
        printf("\nBook %d :\n", i + 1);

        printf("Enter Book Name : ");
        fgets(books[i].name, sizeof(books[i].name), stdin);
        books[i].name[strcspn(books[i].name, "\n")] = 0;

        printf("Enter Author Name : ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0;

        printf("Enter Publisher's Name : ");
        fgets(books[i].publisher, sizeof(books[i].publisher), stdin);
        books[i].publisher[strcspn(books[i].publisher, "\n")] = 0;

        printf("Enter Price : ");
        scanf("%f", &books[i].price);
    }

    printf("\nBooks With Price Greater Than 500 :\n");
    int found = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (books[i].price > 500)
        {
            printf("\nBook %d :\n", i + 1);
            printf("Name : %s\n", books[i].name);
            printf("Author : %s\n", books[i].author);
            printf("Publisher : %s\n", books[i].publisher);
            printf("Price : %.2f\n", books[i].price);
            found = 1;
        }
    }

    if (!found)
    {
        printf("No Books Found With Pice Greater Than 500.\n");
    }

    return 0;
}
