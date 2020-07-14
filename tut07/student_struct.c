// A struct to keep track of student marks
// July 2020

#include <stdio.h>

struct student {
    char name[MAX_STUDENT_NAME_LEN];
    int zid;
    double labs[10];
    double tests[7];
    double asst[2];
    double exam;
}

int main(void) {
    struct student finbar;
    finbar.name = "Finbar";
    finbar.labs[4] = 0.8;
    finbar.exam = 100;

    return 0;
}
