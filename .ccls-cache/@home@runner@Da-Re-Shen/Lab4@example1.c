#include <stdio.h>
#include <ctype.h>

int main() {
    char string[] = "Hello, World! 123";
    int i;

    for (i = 0; string[i] != '\0'; i++) {
        if (isalnum(string[i])) {
            printf("'%c' is alphanumeric\n", string[i]);
        } else {
            printf("'%c' is non-alphanumeric\n", string[i]);
        }
    }

    return 0;
}
