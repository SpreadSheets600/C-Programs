#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    char *buffer = NULL;
    
    int bufferSize = 0;
    int charCount = 0;

    printf("Enter Characters ( Enter To Stop ) : \n");

    while ((ch = getchar()) != '\n')
    {
        bufferSize++;
        buffer = (char *)realloc(buffer, bufferSize * sizeof(char));
        if (buffer == NULL)
        {
            perror("Memory Allocation Failed");
            return 1;
        }
        buffer[charCount++] = ch;
    }

    printf("\nCharacters Entered :\n");
    for (int i = 0; i < charCount; i++)
    {
        printf("%c", buffer[i]);
    }
    printf("\n");

    free(buffer);
    return 0;
}
