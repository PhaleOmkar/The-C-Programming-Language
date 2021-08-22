/* Exercise 1-2. Experiment to find out what happens when print's arguments string contains \c, where c is some character listed abov.
* Following are the listed characters :
* \n - Newline character
* \t - Tab
* \b - Backspace
* \" - Double quote
* \\ - Backslash
*/

#include <stdio.h>

int main(void)
{
    printf("\thello0\b,\n \"world\"\\\n");

    return 0;
}
