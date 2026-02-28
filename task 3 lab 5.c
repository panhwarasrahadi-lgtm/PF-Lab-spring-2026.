#include <stdio.h>

int main() {
    int mainType, subType;
    float weight, totalFee = 0;

    printf("Select Main Luggage Type:\n");
    printf("1. Handbag\n");
    printf("2. Checked Bag\n");
    printf("3. Sports Equipment\n");
    printf("Enter choice: ");
    scanf("%d", &mainType);

    printf("Enter luggage weight (in kg): ");
    scanf("%f", &weight);

    switch (mainType) {

        case 1: 
            printf("Handbag Type:\n");
            printf("1. Small\n");
            printf("2. Large\n");
            printf("Enter choice: ");
            scanf("%d", &subType);

            switch (subType) {
                case 1:
                    totalFee = weight * 100;
                    break;
                case 2:
                    totalFee = weight * 200;
                    break;
                default:
                    printf("Invalid Handbag Type\n");
                    return 0;
            }
            break;

        case 2: 
            printf("Checked Bag Type:\n");
            printf("1. Domestic\n");
            printf("2. International\n");
            printf("Enter choice: ");
            scanf("%d", &subType);

            switch (subType) {
                case 1:
                    totalFee = weight * 300;
                    break;
                case 2:
                    totalFee = weight * 500;
                    break;
                default:
                    printf("Invalid Checked Bag Type\n");
                    return 0;
            }
            break;

        case 3: 
            totalFee = weight * 1000;
            break;

        default:
            printf("Invalid Luggage Type\n");
            return 0;
    }

    printf("Total Luggage Fee = Rs. %.2f\n", totalFee);

    return 0;
}
