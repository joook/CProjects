#include <stdio.h>

#define MAX_LENGTH 1000

int getLine(char* line, int maxLength);
void trim(char* trimmedLine, char* originalLine);

int main()
{
    int length = 0;
    char line[MAX_LENGTH];
    char trimmedLine[MAX_LENGTH];

    while ((length = getLine(line, MAX_LENGTH)) != 0)
    {
        trim(trimmedLine, line);
        printf("After trimmed: %s\n", trimmedLine);
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

void trim(char* trimmedLine, char* originalLine)
{
    int i = 0;
    int j = 0;

    while (originalLine[i] != '\0')
    {
        if ((originalLine[i] != ' ') && (originalLine[i] != '\t'))
        {
            trimmedLine[j] = originalLine[i];
            j++;
        }
        else
        {
        }
        i++;
    }
    trimmedLine[j] = '\0';
}

