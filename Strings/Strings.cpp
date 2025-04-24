#include <conio.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];                                     // Declaring A String With 20 Characters
    char str2[20] = "Hello";                           // Declaring A String With Initializing It
    char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Declaring A String With Without Specifying Size

    // Looping Through The String To Print Each Character
    for (int i = 0; i < strlen(greeting); i++) // Using strlen() To Get The Length Of The String ( Can Specify Size As Well )
    {
        printf("%c", greeting[i]);
    }

    printf("\n");

    // Printing Using %s Format Specifier
    printf("%s\n", greeting);

    // Thaking Input From User
    printf("Enter A String ( Functions ) : ");

    gets(str1);                       // Using gets() To Take Input From User ( Not Recommended As It Can Cause Buffer Overflow )
    fgets(str1, sizeof(str1), stdin); // Using fgets() To Take Input From User ( Recommended As It Is Safer Than gets() )

    // gets() Takes Input With Whitespaces And Stops At New Line
    // fgets() Does The Same But Is Used For File Streams And Takes The Size Of The String As Well

    printf("You Entered : %s\n", str1); // Printing The String Entered By The User

    // Using scanf() To Take Input From User ( Not Recommended As It Can Cause Buffer Overflow )
    printf("Enter A String ( Scanf ) : ");

    scanf("%s", str1);                  // Using scanf() To Take Input From User ( Not Recommended As It Can Cause Buffer Overflow )
    printf("You Entered : %s\n", str1); // Printing The String Entered By The User

    // Using scanf("%[^\n]s") To Take Input
    printf("Enter A String ( Scanf ) : ");

    scanf("%[^\n]s", str1);             // Using scanf() To Take Input From User
    printf("You Entered : %s\n", str1); // Printing The String Entered By The User

    // Using Puts() And Fputs() To Print The String
    puts(str1);          // Using puts() To Print The String ( Adds A New Line At The End )
    fputs(str1, stdout); // Using fputs() To Print The String ( Does Not Add A New Line At The End )
    fputs(str1, stderr); // Using fputs() To Print The String ( Does Not Add A New Line At The End )

    // Stdout And Stderr Are Standard Output And Standard Error Streams Respectively
}