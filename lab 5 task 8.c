#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float weight, height, bmi, bmr, idealWeight;
    int age;
    char gender;
    float maxHR, lowerZone, upperZone;

    printf("Health Calculator Menu:\n");
    printf("1. BMI Calculation\n");
    printf("2. BMR Calculation\n");
    printf("3. Ideal Weight (Devine Formula)\n");
    printf("4. Heart Rate Zone\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter weight (kg): ");
            scanf("%f", &weight);
            printf("Enter height (meters): ");
            scanf("%f", &height);

            if (weight > 0 && height > 0) {
                bmi = weight / pow(height, 2);
                printf("BMI = %.2f\n", bmi);
            } else {
                printf("Invalid input: Weight and height must be positive\n");
            }
            break;

        case 2:
            printf("Enter gender (M/F): ");
            scanf(" %c", &gender);
            printf("Enter weight (kg): ");
            scanf("%f", &weight);
            printf("Enter height (cm): ");
            scanf("%f", &height);
            printf("Enter age: ");
            scanf("%d", &age);

            if (weight > 0 && height > 0 && age > 0) {
                if (gender == 'M' || gender == 'm') {
                    bmr = 10 * weight + 6.25 * height - 5 * age + 5;
                } else if (gender == 'F' || gender == 'f') {
                    bmr = 10 * weight + 6.25 * height - 5 * age - 161;
                } else {
                    printf("Invalid gender\n");
                    break;
                }
                printf("BMR = %.2f calories/day\n", bmr);
            } else {
                printf("Invalid input values\n");
            }
            break;

        case 3:
            printf("Enter gender (M/F): ");
            scanf(" %c", &gender);
            printf("Enter height (cm): ");
            scanf("%f", &height);

            if (height > 0) {
                if (gender == 'M' || gender == 'm') {
                    idealWeight = 50 + 2.3 * ((height - 152.4) / 2.54);
                } else if (gender == 'F' || gender == 'f') {
                    idealWeight = 45.5 + 2.3 * ((height - 152.4) / 2.54);
                } else {
                    printf("Invalid gender\n");
                    break;
                }
                printf("Ideal Weight = %.2f kg\n", fabs(idealWeight));
            } else {
                printf("Invalid height\n");
            }
            break;

        case 4:
            printf("Enter age: ");
            scanf("%d", &age);

            if (age > 0) {
                maxHR = 220 - age;
                lowerZone = 0.50 * maxHR;
                upperZone = 0.85 * maxHR;

                printf("Heart Rate Zone: %.0f - %.0f bpm\n",
                       sqrt(lowerZone * lowerZone),
                       sqrt(upperZone * upperZone));
            } else {
                printf("Invalid age\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
