// Print out some info about a pointer

#include <stdio.h>

#define SIZE 5

void pointer_info(int a, int *ptr);

int main(void) {
    int a = 0;
    printf("Input a number for a: ");
    scanf("%d", &a);
    pointer_info(a, &a);
    printf("\n");

    int array[5] = {0};
    int i = 0;
    while (i < SIZE) {
        printf("Input a number for array[%d]: ", i);
        scanf("%d", &array[i]);
        pointer_info(array[i], &array[i]);
        i++;
    }
}

void pointer_info(int a, int *ptr) {
    printf("The variable at address %p has the value %d\n", ptr, a);
}
