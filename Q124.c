#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile;
    FILE *destFile;
    char sourcePath[100];
    char destPath[100];
    int ch;

    printf("Enter source file path: ");
    scanf("%s", sourcePath);

    printf("Enter destination file path: ");
    scanf("%s", destPath);

    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Unable to open source file.\n");
        exit(EXIT_FAILURE);
    }

    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Unable to open destination file.\n");
        fclose(sourceFile);
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("Contents copied successfully.\n");

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}