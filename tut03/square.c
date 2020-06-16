#include <stdio.h>

int main(void) {
    int size;
    int row, column;

    // Obtain input
    printf("Enter size: ");
    scanf("%d", &size);

    row = 1;
    while (row <= size) {
        column = 1;
        while (column <= size) {
            //if (row == column) { // diagonal line from top left
            //if (row >= size - column + 1) { // triangle with top at top right
            if (column % 2 == 0) { // starts for every second column
                printf("*");
            } else {
                printf("-");
            }

            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}
