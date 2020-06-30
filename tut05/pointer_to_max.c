// Use pointers to "return" numbers
// Finbar Berkon
// June 2020

#include <stdio.h>

// Write a void function which returns the address of the greater of two
// integers passed by reference.
int *max(int *a, int *b);

int main(void) {
    int a = 5;
    int b = 12;
    int *larger = max(&a, &b);
    printf("The bigger number is %d\n", *larger);
    return 0;
}

int *max(int *a, int *b) {
    if (*a < *b) {
        return b;
    } else {
        return a;
    }
}
