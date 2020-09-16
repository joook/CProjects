#include <stdio.h>

main()
{
    int currentChar;
    while ((currentChar = getchar()) != EOF)
    {
        if (currentChar == '\t')
        {
            printf("[\\t]");
        }
        else
        {
            printf("%c", currentChar);
        }
    }
    printf("\n");
}
