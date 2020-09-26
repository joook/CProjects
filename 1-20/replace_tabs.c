#include <stdio.h>

#define MAX_LENGTH 1000

int getLine(char* line, int maxLength);
void replaceTab(char* inStr, char* outStr);

int main()
{
    int length = 0;
    char line[MAX_LENGTH];
    char newLine[MAX_LENGTH];

    while ((length = getLine(line, MAX_LENGTH)) != 0)
    {
        replaceTab(line, newLine);
        printf("\nOriginal line: %s\n", line);
        printf("\nAfter tabs replaced: %s\n", newLine);
    }

    return 0;
}

int getLine(char* line, int maxLength)
{
    int length = 0;
    char c;

    while ((c = getchar()) != EOF)
    {
        if ((c != '\n') && (length < maxLength-1))
        {
            line[length] = c;
            length++;
        }
        else
        {
            line[length] = '\0';
            length++;
            break;
        }
    }

    return length;
}

void replaceTab(char* inStr, char* outStr)
{
    int inPos = 0;
    int outPos = 0;
    while (inStr[inPos] != '\0')
    {
        if (inStr[inPos] == '\t')
        {
            for (int i = 0; i < 4; i++)
            {
                outStr[outPos] = ' ';
                outPos++;
            }
        }
        else
        {
            outStr[outPos] = inStr[inPos];
            outPos++;
        }
        inPos++;
    }
    outStr[outPos] = '\0';
}
