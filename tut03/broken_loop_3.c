// A while loop with an error in it
// 20T2

#include <stdio.h>

int main(void) {
    int i = 0;
    int n = 10;

    while (i < n) {
        printf("%d\n", i);
        n = n + i;
        i = i + 1;
    }

    return 0;
}








// This is an infinite loop because the assignment n = n + i makes n grow faster
// than i.
