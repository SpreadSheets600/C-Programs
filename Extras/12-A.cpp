#include <stdio.h>

#define MAX_CUSTOMERS 100

struct Customer
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Customer customers[MAX_CUSTOMERS];
    int n;

    printf("Enter Number Of Customers : ");
    scanf("%d", &n);

    FILE *fp = fopen("Customers.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter Name Of The Customer %d : ", i + 1);
        scanf(" %[^\n]", customers[i].name);
        printf("Enter Phone Number Of Customer %d : ", i + 1);
        scanf(" %[^\n]", customers[i].phone);

        fprintf(fp, "Name : %s\tPhone : %s\n", customers[i].name, customers[i].phone);
    }

    fclose(fp);
    printf("Customer Data Written Successfully!\n");
    return 0;
}
