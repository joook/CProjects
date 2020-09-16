#include <stdio.h>

enum WordStatusEnum
{
    WORD_BEGIN = 1,
    WORD_END = 2
};

main()
{
    int count = 0;
    int currentChar;
    enum WordStatusEnum status = WORD_END;

    while ((currentChar = getchar()) != EOF)
    {
        if ((currentChar == ' ')
            || (currentChar == '\t')
            || (currentChar == '\n'))
        {
            status = WORD_END;
        }
        else
        {
            if (status == WORD_END)
            {
                status = WORD_BEGIN;
                count++;
            }
            else
            {
            }
        }
    }

    printf("%d words in the string.\n", count);
}
