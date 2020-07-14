// A program that outputs the result of a secret function
// July 2020

#include <stdio.h>

#define STRING_1 "hello"
#define STRING_2 "abcdefghijklmnopqrstuvwxyz"
#define STRING_3 "Hello World!"
#define STRING_4 "10 + 20 is equal to 30."

// What will this function return for each of the strings defined above?
int secret_function(char *string) {
    int i = 0;
    int result = 0;
    while (string[i] != '\0') {
        if(string[i] >= 'a' && string[i] <= 'z') {
            result++;
        }
        i++;
    }
    return result;
}



























// The main function is all the way down here so its out of the way for us to
// think about what the secret funciton does.
int main(void) {
    printf("secret_function(\"%s\")\t\t\treturns %d\n", STRING_1, secret_function(STRING_1));
    printf("secret_function(\"%s\")\treturns %d\n", STRING_2, secret_function(STRING_2));
    printf("secret_function(\"%s\")\t\t\treturns %d\n", STRING_3, secret_function(STRING_3));
    printf("secret_function(\"%s\")\treturns %d\n", STRING_4, secret_function(STRING_4));
}
