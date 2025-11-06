#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    if (strlen(str) > 0) {
        str[0] = toupper(str[0]);
        for (i = 1; str[i] != '\0'; i++) {
            str[i] = tolower(str[i]);
        }
    }

    printf("Sentence case string: %s\n", str);

    return 0;
}