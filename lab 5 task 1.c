#include <stdio.h>

int main() {
    int age;
    int fitnessScore;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter fitness score: ");
    scanf("%d", &fitnessScore);

    if (fitnessScore >= 85) {
        if (age < 25) {
            printf("Discount: 40%%\n");
        } else {
            printf("Discount: 25%%\n");
        }
    } else {
        if (fitnessScore >= 70 && age < 30) {
            printf("Discount: 15%%\n");
        } else {
            printf("No Discount\n");
        }
    }

    return 0;
}
