/* Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */

#include <stdio.h>

#define BLANK 0
#define NOT_BLANK 1

int main(void)
{
    int c;
    int blank;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            blank = BLANK;
        }
        else
        {
            blank = NOT_BLANK;
        }

        if (blank == NOT_BLANK)
        {
            putchar(c);
        }
    }

    return 0;
}
