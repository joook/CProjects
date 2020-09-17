#include <stdio.h>

#define MAX_WORD_NUM 1000

enum WordStatusEnum
{
    WORD_BEGIN = 1,
    WORD_END = 2
};

void printVerticalHistogram(const unsigned char* sourceList, const int num);

void main()
{
    unsigned char wordLengthLiist[MAX_WORD_NUM];
    int num = 0;
    unsigned char length = 0;
    int currentChar;
    enum WordStatusEnum status = WORD_END;

    for (int i = 0; i < MAX_WORD_NUM; i++)
    {
        wordLengthLiist[i] = 0;
    }

    while ((currentChar = getchar()) != EOF)
    {
        if ((currentChar == ' ')
            || (currentChar == '\t')
            || (currentChar == '\n'))
        {
            if (status == WORD_BEGIN)
            {
                wordLengthLiist[num-1] = length;
                length = 0;
                status = WORD_END;
            }
            else
            {
            }
        }
        else
        {
            if (status == WORD_BEGIN)
            {
            }
            else
            {
                num++;
                status = WORD_BEGIN;
            }
            length++;
        }
    }

    printVerticalHistogram(wordLengthLiist, num);
}

void printVerticalHistogram(const unsigned char* sourceList, const int num)
{
    if ((sourceList != NULL) && (num != 0))
    {
        unsigned char maxVal = 0;
        for (int i = 0; i < num; i++)
        {
            if (maxVal < sourceList[i])
            {
                maxVal = sourceList[i];
            }
            else
            {
            }
        }

        printf("\n\n");
        printf("-----WORD LENGTH DIAGRAM-----\n");

        for (unsigned char val = maxVal; val > 0; val--)
        {
            for (int i = 0; i < num; i++)
            {
                if (sourceList[i] >= val)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }

        for (int i = 0; i < num; i++)
        {
            printf("=");
        }
        printf("\n");

        printf("-----------------------------\n");
    }
    else
    {
    }
}
