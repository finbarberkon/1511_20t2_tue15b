// A program that uses getchar and putchar to echo input
// July 2020

#include <stdio.h>

#define STR_SIZE 50

int main(void) {
    // 1) create a variable to store the string
    char string[STR_SIZE] = {'\0'};

    printf("Please enter a series of characters. ");
    printf("Press Ctrl-D when you are done.\n");

    // Keep reading in strings until we reach the
    // end of input and fgets returns NULL
    while (fgets(string, STR_SIZE, stdin) != NULL) {
        // Print out the string we just read
        fputs(string, stdout);
    }
}
