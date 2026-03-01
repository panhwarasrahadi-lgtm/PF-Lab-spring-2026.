#include <stdio.h>

int main() {
    int password;
    int correctPassword = 1234;

    do {
        printf("Enter password: ");
        scanf("%d", &password);
        if (password != correctPassword) {
            printf("Incorrect password. Please try again.\n");
        }
    } while (password != correctPassword);

    printf("Correct password entered. Access granted.\n");
    return 0;

}
