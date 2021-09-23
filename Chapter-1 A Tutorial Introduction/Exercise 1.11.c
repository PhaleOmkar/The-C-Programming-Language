/* Exercise 1-11. How would you test the word count program? What kinds of input are most likely to uncover bugs if there are any?        */

/* Valid Inputs:  It could be any stream of space separate text. It has valid space, newline and tab characters.
*                 For Boundary conditions, a file entirely consisting of n, or a file entirely consisting of t character or a empty file.
* Invalid Inputs: An unclosed file which does not have EOF, which is tricky to provide can be given to this program.
*                 A unicode character file can be given and see if getchar() handles it properly. We tested it and it works.             */

#include <stdio.h>

int main(void)
{
    int c, nl, nw, nc, state;

    state = 0;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = 0;
        }
        else if (state == 0)
        {
            state = 1;
            ++nw;
        }
    }

    printf("====================================================\n");
    printf("stats>> lines: %d words: %d character: %d\n", nl, nw, nc);

    return 0;
}
