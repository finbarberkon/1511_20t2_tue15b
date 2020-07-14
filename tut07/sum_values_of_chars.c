// Sum the values of numbers entered as characters in input
// June 2020
// Finbar Berkon

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int is_num(char ch);

int main(void) {
    int sum = 0;
    printf("Please enter a series of characters. ");
    printf("Press Ctrl-D when you are done.\n");
    int ch = getchar();
    while (ch != EOF) {
        if (is_num(ch)) {
             // how can we sum the values of the numbers that we read in as
             // characters from the input?
             sum += ch - '0';
        }
        ch = getchar();
    }
    printf("sum = %d\n", sum);
    return 0;
}

int is_num(char ch) {
    if (ch >= '0' && ch <= '9') {
        return TRUE;
    } else {
        return FALSE;
    }
}
