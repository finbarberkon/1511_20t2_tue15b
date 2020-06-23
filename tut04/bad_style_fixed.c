// Author: unknown
// Date: unknown
// A program to determine whether the user is in high school

#include <stdio.h>

#define PRIMARY_SCHOOL_MAX 7
#define HIGH_SCHOOL_MAX 12

int main(void) {
    int user_year = 0;
    printf("What year are you in? ");
    scanf("%d", &user_year);
    if (user_year > PRIMARY_SCHOOL_MAX || user_year == PRIMARY_SCHOOL_MAX) {
        if (user_year < HIGH_SCHOOL_MAX || user_year == HIGH_SCHOOL_MAX) {
            printf("You are in high school\n");
        }
    }
    if (user_year < PRIMARY_SCHOOL_MAX || user_year > HIGH_SCHOOL_MAX) {
        printf("You are not in high school\n");
    }
    return 0;
}
