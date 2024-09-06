#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, counter = 0, wordSize = 0, isCapital = 0;
    char *buffer;
    size_t bufsize = 32;
    size_t characters;
    buffer = (char *)malloc(bufsize * sizeof(char));
    characters = getline(&buffer, &bufsize, stdin);
    for (i = 0; i < characters; i++)
    {
        int numberdBuffer = buffer[i];
        if ((numberdBuffer > 64 && numberdBuffer < 91) || (numberdBuffer > 96 && numberdBuffer < 123))
        {
            if (numberdBuffer < 91)
            {
                isCapital++;
            }
            wordSize++;
            if (numberdBuffer == 97 || numberdBuffer == 101 || numberdBuffer == 105 || numberdBuffer == 111 || numberdBuffer == 117 || numberdBuffer == 121)
            {
                if (counter < 5)
                {
                    counter = 0;
                }
                else
                {
                    counter++;
                }
            }
            else
            {
                counter++;
            }
        }
        else
        {
            if (counter > 4 && isCapital != wordSize)
            {
                for (j = wordSize; j > 0; j--)
                {
                    printf("%c", buffer[i - j]);
                }
                printf(" ");
            }
            wordSize = 0;
            isCapital = 0;
            counter = 0;
        }
    }
    return (0);
}
