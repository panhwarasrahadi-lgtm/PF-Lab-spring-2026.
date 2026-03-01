// 11. Online Shopping Cart Checkout System (Do-While Loop – Exit Controlled & User Choice Based)
// An online shopping system allows customers to continuously add products to their cart.
// Each time:
// •	The user enters the price of a product.
// •	The system adds it to the total bill.
// •	After each entry, the system asks whether the customer wants to add another product (1 = Yes, 0 = No).
// The program must:
// •	Use a do-while loop so that at least one product is entered.
// •	Calculate the total bill amount.
// •	Apply a 5% discount if the total bill exceeds 5000.
// •	Display the final payable amount.
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