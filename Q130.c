#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    FILE *fptr;
    struct Student s;
    int numStudents, i;

    fptr = fopen("students.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Roll Number: ");
        scanf("%d", &s.rollNumber);
        printf("Marks: ");
        scanf("%f", &s.marks);
        fprintf(fptr, "%s %d %.2f\n", s.name, s.rollNumber, s.marks);
    }
    fclose(fptr);

    fptr = fopen("students.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nDisplaying student records from file:\n");
    while (fscanf(fptr, "%s %d %f", s.name, &s.rollNumber, &s.marks) == 3) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", s.name, s.rollNumber, s.marks);
    }
    fclose(fptr);

    return 0;
}