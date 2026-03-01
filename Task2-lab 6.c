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
