//2. ATM Withdrawal System (While Loop – Condition Based) An ATM allows a user to withdraw money until their balance becomes zero or negative. Write a C program using a while loop that keeps asking the user to enter the withdrawal amount and deducts it from the balance until the balance is exhausted.
#include <stdio.h>

int main() {
    float balance, withdrawal;
    
    printf("Enter initial balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter withdrawal amount: ");
        scanf("%f", &withdrawal);

        if (withdrawal > balance) {
            printf("Insufficient funds!\n");
        } else {
            balance -= withdrawal;
            printf("Withdrawal successful. Remaining balance: %.2f\n", balance);
        }
    }

    printf("Your account is now empty.\n");
    return 0;
}