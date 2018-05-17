#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void safestringinput(char * str, size_t size);

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

void safestringinput(char * str, size_t size) {
    int c;
    fgets(str, size, stdin);
    if (strlen(str) == size - 1)
        while ((c = getchar()) != '\n' && c != EOF);
    str[strcspn(str, "\n")] = '\0';
    fflush(stdin);
}
