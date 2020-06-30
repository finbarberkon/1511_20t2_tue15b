// Use pointers to "return" numbers
// Finbar Berkon
// June 2020

#include <stdio.h>

// Write a void function which places the sum of two numbers inside a variable
// passed in by reference. It should have the following prototype
void sum_nums(int a, int b, int *sum);

int main(void) {
    int sum = 0;
    sum_nums(2, 4, &sum);
    printf("sum has the value %d at address %p\n", sum, &sum);
    return 0;
}

void sum_nums(int a, int b, int *sum) {
    *sum = a + b;
}
