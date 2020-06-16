// A while loop with an error in it
// 20T2

#include <stdio.h>

int main(void) {
    int i = 0;
    int j = 0;

    while (j = 1 || i < 100) {
        printf("%d\n", i);
        i = i + 1;
    }

    return 0;
}








// j = 1 means "set j to be 1", j == 1 is checking whether j is equal to 1. You
// need the double equals for checking something
