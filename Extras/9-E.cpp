#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    printf("Enter A String: ");
    fgets(str, sizeof(str), stdin);

    printf("You Entered : %s\n", str);

    return 0;
}
