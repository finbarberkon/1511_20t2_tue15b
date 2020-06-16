// Finbar Berkon
// Print out n asterisks
// 1511 20T2

#include <stdio.h>

int main(void) {
    int length;
    printf("Please enter an integer: ");
    scanf("%d", &length);

    int i = 0;
    while(i < length) {
        printf("*\n");
        i = i + 1;
    }

    return 0;
}
