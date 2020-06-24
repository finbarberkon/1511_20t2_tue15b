// Author: Finbar Berkon
// Date: June 2020
// A program to read input until EOF

    /* 1) write a loop to read in numbers and print out that number
     *    until end of input / end of file (EOF) -- DONE */ 

#include <stdio.h>

#define ARRAY_SIZE 1000

void print_array(int array[], int length);

int main(void) {
    int input = 0;

    // scanf returns the number of variables it successfully saved
    // values into. So below, we've asked for 1 value to be saved
    // into the variable `input` so we expect to see scanf return 1
    // if it worked (and 0, meaning it saved 0 values into variables,
    // when the user stops entering input and instead enters ctrl-D)
    while (scanf("%d", &input) == 1) {
        printf("You entered %d\n", input);
    }

    return 0;
}
