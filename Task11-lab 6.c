
#include <stdio.h>

int main() {
    float price, totalBill = 0.0;
    int choice;

    do {
        printf("Enter the price of the product: ");
        scanf("%f", &price);
        totalBill += price;

        printf("Do you want to add another product? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
    } while (choice == 1);

    if (totalBill > 5000) {
        totalBill *= 0.95; // Apply a 5% discount
    }

    printf("The final payable amount is: %.2f\n", totalBill);
    return 0;

}
