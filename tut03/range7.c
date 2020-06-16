// Finbar Berkon
// COMP1511 20t2
// Count up from 1 to n, print only if divisible by 7

#include <stdio.h>

#define DIVISOR 7

int main(void) {
    int userInput;
    printf("Please enter an integer: ");
    scanf("%d", &userInput);

    int counter = 1;
    while (counter <= userInput) {
        if (counter % DIVISOR == 0) {
            printf("%d\n", counter);
        }
        counter = counter + 1; // same as counter++
    }

    return 0;
}
