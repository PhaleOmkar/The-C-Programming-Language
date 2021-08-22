/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */

#include <stdio.h>

int main(void)
{
    int c = 0;
    int nblanks = 0;
    int ntabs = 0;
    int nnewlines = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++nblanks;
        }
        if (c == '\t')
        {
            ++ntabs;
        }
        if (c == '\n')
        {
            ++nnewlines;
        }
    }

    printf("\n==========================================================\n");
    printf("%d blanks, %d tabs, and %d newlines.\n", nblanks, ntabs, nnewlines);

    return 0;
}
