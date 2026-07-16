// A program to store the marks obtained by 10 students in 5 courses in a 2D array.

#include <stdio.h>

int main() {
    int marks[10][5];
    int i, j;
    for (i = 0; i < 10; i++) {
        printf("Enter marks of student %d in 5 courses:\n", i + 1);
        for (j = 0; j < 5; j++) {
            printf("Course %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    printf("\n--- Marks Table ---\n");
    for (i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        for (j = 0; j < 5; j++) {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}