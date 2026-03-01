
#include <stdio.h>

int main() {
    int score;
    int distinction_count = 0;
    int pass_count = 0;
    int fail_count = 0;

    printf("Enter student scores (0-100). Enter -1 to stop:\n");
    while (1) {
        scanf("%d", &score);
        
        if (score == -1) {
            break; }

        if (score < 0 || score > 100) {
            printf("Invalid score. Please enter a score between 0 and 100.\n");
            continue; 
        }

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
