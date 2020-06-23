// Author: Finbar Berkon
// Date: June 2020
// A program to use a function to check whether a number is even

#include <stdio.h>

#define TRUE 1
#define FALSE 0

// Three things to do to use a function we define ourselves:
// 1) provide a function prototype
// 2) actually implement our function
// 3) call our function

int is_even(int num);

int main(void) {
    if (is_even(2)) {
        printf("%d is even\n", 2);
    } else {
        printf("%d is not even\n", 2);
    }
    return 0;
}

int is_even(int num) {
    if (num % 2 == 0) {
        return TRUE;
    } else {
        return FALSE;
    }
}
