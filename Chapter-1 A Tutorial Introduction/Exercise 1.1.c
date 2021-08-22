// Exercise 1-1. Run the "hello, world" program on your system. Experiment with leaving out parts of the program, to see what error messages you get.

#include <stdio.h>

int main(void)
{
    printf("hello, world\n"); // valid
    printf("hello, world");   // valid
    printf("hello world\n");  // valid
    printf("\n");             // valid
    printf("");               // valid

    printf("hello, world\n")  // compile time error
    printf(hello, world\n);   // compile time error
    print(hello, world\n);    // compile time error

    return 0;
}
