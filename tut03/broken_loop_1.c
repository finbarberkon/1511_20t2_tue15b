// A while loop with an error in it
// 20T2

#include <stdio.h>

int main(void) {
    int i;

    while (i < 100) {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}








// The variable i is not initialised, so it could start as anything
