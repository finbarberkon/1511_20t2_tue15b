// A program that uses getchar and putchar to echo input
// July 2020

#include <stdio.h>

int main(void) {
    // 1) create a variable to store the character
    int ch = getchar();

    // 2) make a loop with a condition such that it will keep going while there
    //    are still characters to be read
    while (ch != EOF) {
        //    a) print the character we just read
        putchar(ch);

        ch = getchar();
    }
    
    return 0;
}
