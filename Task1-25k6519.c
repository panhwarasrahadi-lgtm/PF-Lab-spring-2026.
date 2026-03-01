//1. Student Attendance Counter (For Loop – Known Iterations) A teacher wants to record attendance for 30 students in a class. Write a C program that uses a for loop to input attendance status (1 = Present, 0 = Absent) for each student and calculate the total number of students present.
#include <stdio.h>

int main () {
    int attendance[30];
    int totalPresent = 0;

    printf("Enter attendance for 30 students (1 for Present, 0 for Absent):\n");
    
    for (int i = 0; i < 30; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &attendance[i]);
        
        if (attendance[i] == 1) {
            totalPresent++;
        }
    }

    printf("Total number of students present: %d\n", totalPresent);

    return 0;
}