// Author: Finbar Berkon
// Date: June 2020
// A program to read input until EOF

    /* 1) write a loop to read in numbers and print out that number
     *    until end of input / end of file (EOF) -- DONE */ 
    /* 2) modify this loop to save the numbers into an array of size 1000 (and make
     *    sure to initialise this array!) -- DONE */
    /* 3) write a function called array_print to print out the array
     *    created in step 2 -- DONE */
    /* 4) write a function called first_plus_third that sums the first
     *    and third elements of an array called numbers and returns
     *    that number. What about the first and last? -- NOT DONE */

#include <stdio.h>

#define ARRAY_SIZE 1000

void print_array(int array[], int length);

int main(void) {
    int input[ARRAY_SIZE] = {0};
    int i = 0;
    while (scanf("%d", &input[i]) == 1) {
        printf("You entered %d\n", input[i]);
        i++;
    }
    
    print_array(input, i);
    
    return 0;
}

void print_array(int array[], int length) {
    int i = 0;
    while (i < length) {
        printf("%d, ", array[i]);
        i++;
    }
    printf("\n");
}
