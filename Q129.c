#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int num;
    long long sum = 0;
    int count = 0;
    double average;

    file = fopen("numbers.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No numbers found in the file.\n");
        return 1;
    }

    average = (double)sum / count;

    printf("Sum: %lld\n", sum);
    printf("Average: %.2lf\n", average);

    return 0;
}