#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int safestringinput(char * str, size_t size);

int main() {
    char string1[20], string2[10], string3[8];

    printf("String1: \n");
    safestringinput(string1, sizeof(string1));
    printf("String2: \n");
    safestringinput(string2, sizeof(string2));
    printf("String3: \n");
    safestringinput(string3, sizeof(string3));

    printf("\nStrings:\n%s\n%s\n%s\n", string1, string2, string3);

    return 0;
}

int safestringinput(char * str, size_t size) {
    //returns 1 if overflow occured, otherwise 0 if no chars had to be truncated
    bool overflowoccured = false;
    fgets(str, size, stdin);
    if (strlen(str) == size - 1) {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        overflowoccured = true;
    }
    str[strcspn(str, "\n")] = '\0';
    fflush(stdin);
    if (overflowoccured)
        return 1;
    else
        return 0;
}
