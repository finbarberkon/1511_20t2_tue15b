// Finbar Berkon
// COMP1511 20t2
// Count up from 1 to n

#include <stdio.h>

int main(void) {
    int userInput;
    printf("Please enter an integer: ");
    scanf("%d", &userInput);

    int counter = 1;
    while (counter <= userInput) {
        printf("%d\n", counter);
        counter = counter + 1; // same as counter++
    }

    return 0;
}
