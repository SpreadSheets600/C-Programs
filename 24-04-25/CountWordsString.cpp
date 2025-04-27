#include <stdio.h>
#include <string.h>

int countWords(char sentence[])
{
    int count = 1;

    for (int i = 0; sentence[i] != '\0'; i++) // \0 Is Null Character To Termnate Loop
    {
        if (sentence[i] == ' ')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char sentence[100];
    printf("Enter The Sentence : ");
    scanf("%[^\n]s", sentence);

    printf("Number Of Words : %d\n", countWords(sentence));

    return 0;
}