// 10. University Data Analysis System (While Loop – Logical Classification & Sentinel Control)
// A university is analyzing student test scores for research purposes. The system should continuously accept student scores (0–100).
// The program must:
// •	Continue taking input until the user enters -1 (sentinel value)
// •	Count how many students scored:
// o	Distinction (≥ 75)
// o	Pass (50–74)
// o	Fail (< 50)
// •	Display the total number of students in each category
// Use a while loop to control the execution and ensure proper classification logic.
#include <stdio.h>

int main() {
    int score;
    int distinction_count = 0;
    int pass_count = 0;
    int fail_count = 0;

    // Continuously accept student scores until -1 is entered
    printf("Enter student scores (0-100). Enter -1 to stop:\n");
    while (1) {
        scanf("%d", &score);
        
        // Check for sentinel value
        if (score == -1) {
            break; // Exit the loop if -1 is entered
        }

        // Validate score input
        if (score < 0 || score > 100) {
            printf("Invalid score. Please enter a score between 0 and 100.\n");
            continue; // Skip invalid input
        }

        // Classify the score
        if (score >= 75) {
            distinction_count++;
        } else if (score >= 50) {
            pass_count++;
        } else {
            fail_count++;
        }
    }

    // Display the total number of students in each category
    printf("Total number of students with Distinction: %d\n", distinction_count);
    printf("Total number of students with Pass: %d\n", pass_count);
    printf("Total number of students with Fail: %d\n", fail_count);

    return 0;
}