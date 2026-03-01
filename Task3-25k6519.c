//3. Password Retry System (Do-While Loop – At Least One Execution) A system requires a user to enter a password. The correct password is 1234. Write a C program using a do-while loop that keeps asking the user to enter the password until the correct one is entered.
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