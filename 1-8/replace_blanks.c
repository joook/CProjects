#include <stdio.h>

main()
{
    int lastChar;
    int currentChar;
    while((currentChar = getchar()) != EOF)
    {
        if((lastChar == ' ') && (currentChar == ' '))
        {
        }
        else
        {
            printf("%c", currentChar);
        }
        lastChar = currentChar;
    }
    printf("\n");
}
