// Perform a scalar multiplication on each element of a
// 2D array
// Finbar Berkon
// June 2020

#include <stdio.h>

// Write a function that takes in a 2d array of ints and multiplies every value
// in the array by a given int.
void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar);

void print_matrix(int rows, int columns, int matrix[rows][columns]);

int main(void) {
    int grid[10][10] = {0};
    
    scalar_multiply(10, 10, grid, 2);
    print_matrix(10, 10, grid);

    return 0;
}

void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar) {
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < columns) {
            // Multiply our current matrix value by the scalar and put it
            // back in the matrix
            matrix[i][j] = matrix[i][j] * scalar;
            j++;
        }
        i++;
    }
}

void print_matrix(int rows, int columns, int matrix[rows][columns]) {
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < columns) {
            printf("%d", matrix[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
