#include <stdio.h>
#include <string.h>

int main() {
    FILE *filePointer;
    char line[256];

    filePointer = fopen("example.txt", "a");

    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to append (type 'quit' to exit):\n");

    while (1) {
        fgets(line, sizeof(line), stdin);

        if (strcmp(line, "quit\n") == 0) {
            break;
        }

        fputs(line, filePointer);
    }

    fclose(filePointer);

    printf("Text appended successfully.\n");

    return 0;
}