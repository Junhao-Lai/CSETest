#include <stdio.h>
#include <ctype.h>

int main() {
    char string[] = "Hello, World! 123";
    int i;
    FILE *fp = fopen("output.txt", "w");

    for (i = 0; string[i] != '\0'; i++) {
        if (isalnum(string[i])) {
            fprintf(fp, "'%c' is alphanumeric\n", string[i]);
        } else {
            fprintf(fp, "'%c' is non-alphanumeric\n", string[i]);
        }
    }
    fclose(fp);
    return 0;
}
