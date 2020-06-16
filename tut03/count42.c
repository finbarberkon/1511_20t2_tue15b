// Finbar Berkon
// COMP1511 20t2
// Count up from 1 to 42

#include <stdio.h>

int main(void) {
    int counter = 1;
    while (counter <= 42) {
        printf("%d\n", counter);
        counter = counter + 1; // same as counter++
    }

    return 0;
}
