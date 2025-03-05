#include <stdio.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    int n;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    float totalMarks = 0;

    // Input student data (name and marks)
    for (int i = 0; i < n; i++) {
        printf("\nEnter name of student %d: ", i + 1);
        getchar();  // To consume the leftover newline
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // Remove newline
        
        printf("Enter marks of %s: ", students[i].name);
        scanf("%f", &students[i].marks);
        
        totalMarks += students[i].marks; // Add marks to total
    }

    // Calculate average marks
    float average = totalMarks / n;

    // Output the average
    printf("\nAverage marks: %.2f\n", average);

    // Output students who scored above average
    printf("\nStudents who scored above average:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks > average) {
            printf("%s - %.2f\n", students[i].name, students[i].marks);
        }
    }

    // Output students who scored below average
    printf("\nStudents who scored below average:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks < average) {
            printf("%s - %.2f\n", students[i].name, students[i].marks);
        }
    }

    return 0;
}