// A while loop with an error in it
// 20T2

#include <stdio.h>

int main(void) {
    int i = 0;

    while (i < 10)
        printf("%d\n", i);
        i = i + 1;

    return 0;
}









// The missing braces means only one statement after the while loop is counted
// inside the loop. Therefore the i = i + 1 never happens in the loop and the
// loop is infinite.
