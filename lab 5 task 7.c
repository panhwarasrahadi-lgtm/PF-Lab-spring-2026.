#include <stdio.h>

int main() {
    int enteredCard, enteredPin;
    int validCard = 12345;
    int validPin = 6789;
    float amount, balance = 10000;

    printf("Enter card number: ");
    scanf("%d", &enteredCard);

    printf("Enter PIN: ");
    scanf("%d", &enteredPin);

    printf("Enter transaction amount: ");
    scanf("%f", &amount);

    if (enteredCard == validCard) {
        if (enteredPin == validPin) {
            if (amount > 0 && amount <= balance) {
                printf("Transaction Successful\n");
            } 
            else {
                printf("Insufficient Funds\n");
            }
        } 
        else {
            printf("Invalid PIN\n");
        }
    } 
    else {
        printf("Invalid Card\n");
    }

    return 0;
}
